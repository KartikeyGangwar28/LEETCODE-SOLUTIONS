class Solution {
public:
    int climbStairs(int n) {
        if(n<=3){
            return n;
        }
        int a=0,b=1;
        int temp=0;
        while(n--){
           temp=a+b;
           a=b;
           b=temp;
        }
        return temp;
    }
};