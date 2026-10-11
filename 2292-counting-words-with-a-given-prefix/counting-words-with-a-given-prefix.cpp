class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int n=words.size();
        int x=pref.size();
        int ans=0;
        for(int i=0;i<n;i++){
            int m=words[i].size();
            string temp="";
            int k=0;
            for(int j=0;j<m;j++){
               if(words[i][j]!=pref[k])break;
               else if(words[i][j]==pref[k]){
                temp+=words[i][j];
                k++;
                if(k==x)break;
               }
            }
            if(temp==pref)ans++;
        }
        return ans;
    }
};