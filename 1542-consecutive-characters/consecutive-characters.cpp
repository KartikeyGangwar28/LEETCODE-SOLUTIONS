class Solution {
public:
    int maxPower(string s) {
       int ans=0;
       int n=s.size();
       int i=0;
       while(i<n){
        int c=s[i];
        int count=1;
        i++;
         while(s[i]==c){
             count++;  
                       i++;
         }
         ans=max(ans,count);
       }
       return ans;
    }
};