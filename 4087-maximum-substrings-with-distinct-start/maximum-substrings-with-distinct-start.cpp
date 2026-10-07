class Solution {
public:
    int maxDistinct(string s) {
        // unordered_set<char>m(s.begin(),s.end());
        // return m.size();
       unordered_map<char,int>mp;
       for(char c:s)mp[c]++;
       int ans=0;
       for(auto&it:mp){
        ans++;
       }
       return ans;
    }
};