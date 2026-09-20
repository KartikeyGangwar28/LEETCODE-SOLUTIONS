class Solution {
public:
    int minimizedStringLength(string s) {
         int ans=0;
         vector<char>mp(256);
         for(int i=0;i<s.size();i++){
            if(mp[s[i]]==0)ans++;
            mp[s[i]]+=1;
         }
         return ans;
    }
};