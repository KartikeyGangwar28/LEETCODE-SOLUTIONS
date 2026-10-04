class Solution {
public:
bool is(char c){
   c=tolower(c);
   if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')return true;
   return false;
   }
    bool halvesAreAlike(string s) {
        int left=0;int right=0;
        int n=s.size();
        for(int i=0;i<n/2;i++){
            if(is(s[i]))left++;
            if(is(s[i+(n/2)]))right++;
        }
        return left==right;
        
    }
};