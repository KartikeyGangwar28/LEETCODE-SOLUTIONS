class Solution {
public:
    bool isHappy(int n) {
        if(n==1||n==10||n==7){
            return true;
        }
        else if(n<=12){
            return false;
        }
      while(n>=7){
        int digit=0;
        int num=0;
        while(n!=0){
            digit=n%10;
            num+=pow(digit,2);
            n=n/10;
        }
        n=num;
        if(num==1){
            return true;
        }
      }
return false;
    }
};