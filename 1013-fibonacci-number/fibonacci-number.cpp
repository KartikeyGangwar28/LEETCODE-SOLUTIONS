class Solution {
public:
    int fib(int n) {
        if(n==0||n==1){
            return n;
        }
     int a=0,b=1; 
      unsigned long long temp=0;
        while(n>1){
            temp=a+b;
            a=b;
            b=temp;
            n--;
        }
        return temp;
    }
};