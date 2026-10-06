class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        int n=words.size();
vector<string>ans;
        for(int i=0;i<n;i++){
            
            int x=words[i].size();
            for(int j=0;j<x;j++){
                string temp="";
                while(j<x&&words[i][j]!=separator){
                    temp+=words[i][j];
                    j++;
                }
                if(temp!="")ans.push_back(temp);
            }
        }
        return ans;
    }
};