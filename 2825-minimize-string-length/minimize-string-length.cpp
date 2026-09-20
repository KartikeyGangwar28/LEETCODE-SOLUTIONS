class Solution {
public:
    int minimizedStringLength(string s) {
        unordered_set<char>ans(s.begin(),s.end());
        return ans.size();
    }
};