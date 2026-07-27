class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
         string r;
         for(int i=0;i<n;i++){
            if(isalpha(s[i])){
                r.push_back(tolower(s[i]));
            }
           else if(isalnum(s[i])){
                r.push_back(s[i]);
            }
         }
         int l=r.size();
         for(int i=0,j=l-1;i<j;i++,j--){
            if(r[i]!=r[j]){
                return false;
            }
         }
         return true;
    }
};