class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char,int>mp;
        for(char c:chars)mp[c]++;
        int n=words.size();
        int ans=0;
        for(int i=0;i<n;i++){
            int x=words[i].size();
            bool flag=true;
               unordered_map<char,int>need;
            for(int j=0;j<x;j++){
                // if(mp[words[i][j]]==0){
                //     flag=false;
                //     break;
                // }
                need[words[i][j]]++;
            }
            for(auto&it:need){
                if(mp[it.first]<it.second)flag=false;
            }
            if(flag)ans+=words[i].size();
        }
        return ans;
    }

};