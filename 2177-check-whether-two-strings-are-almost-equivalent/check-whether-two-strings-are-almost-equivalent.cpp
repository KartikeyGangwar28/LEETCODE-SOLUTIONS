class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        int n=word1.size();
        unordered_map<char,int>mp;
        unordered_map<char,int>mpp;
        for(char c:word1)mp[c]++;
        for(char c:word2)mp[c]--;
        for(auto&it:mp){
            if(it.second>3||it.second<(-3))return false;
        }
        return true;
    }
};