class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int n=s.size();
        int i=0,j=n-1;
        for(int i=0,j=n-1;i<j;i++,j--){
            if(s[i]!=s[j]){
                if(s[i]<s[j]){
                    s[j]=s[i];
                }
                else s[i]=s[j];
            }
        }
        return s;
    }
};