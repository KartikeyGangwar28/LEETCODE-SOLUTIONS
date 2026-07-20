class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0){
            return false;
        }
        if(n==1){
            return true;
        }
       unsigned long long int temp=1;
        int tp=n;
        while(tp--){
            if(temp==n){
                return true;
            }
            if(temp>n){
                return false;
            }
            temp*=3;
        }
        return false;
    }
};