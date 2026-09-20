class Solution {
public:
    int minimizedStringLength(string s) {
        set<char>ans(s.begin(),s.end());
        return ans.size();
    }
};