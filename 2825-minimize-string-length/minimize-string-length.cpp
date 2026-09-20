class Solution {
public:
    int minimizedStringLength(string s) {
         int ans=0;
         unordered_map<char,int>mp;
         for(int i=0;i<s.size();i++){
            if(mp[s[i]]==0)ans++;
            mp[s[i]]+=1;
         }
         return ans;
    }
};