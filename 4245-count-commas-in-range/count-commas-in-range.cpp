class Solution {
public:
    int countCommas(int n) {
        if(n<1000){
            return 0;
        }
       int ans=1;
       int temp=1000;
       while(temp!=n){
        ans++;
        temp++;
       }
       return ans;
    }
};