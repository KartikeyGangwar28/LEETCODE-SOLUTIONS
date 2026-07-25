class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        if(n==0){
            return 0;
        }
        int count = 0, prev = 0;
        for (int i = 0; i < n; i++) {
            if (isspace(s[i])) {
                count = 0;
            } else if (isalpha(s[i])) {
                count++;
                prev = count;
            }
        }
        return prev;
    }
};