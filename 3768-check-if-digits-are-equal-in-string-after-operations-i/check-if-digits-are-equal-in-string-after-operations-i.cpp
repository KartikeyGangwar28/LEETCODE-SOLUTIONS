class Solution {
public:
    bool hasSameDigits(string s) {
         string ans;
         while(s.size()!=2){
            string temp;
            int n=s.size();
            for(int i=0;i<n-1;i++){
                temp+=(s[i]+s[i+1])%10;
            }
            s=temp;
         }
        return s[0]==s[1];
    }
};