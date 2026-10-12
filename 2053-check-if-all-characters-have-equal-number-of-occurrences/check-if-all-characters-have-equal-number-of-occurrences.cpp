class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int>mp;
        for(char c:s)mp[c]++;
        int start=mp[s[0]];
        for(auto&it:mp){
            if(it.second!=start)return false;
        }
        return true;
    }
};