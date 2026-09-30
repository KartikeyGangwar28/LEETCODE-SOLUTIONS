class Solution {
public:
int getSum(int x){
    int ans=0;
    if(x<=9)return x;
    while(x!=0){
        ans+=x%10;
        x/=10;
    }
    return ans;
}
    int addDigits(int num) {
    //    if(num<=9){
    //     return num;
    //    }
    //    if(num==10){
    //     return 1;
    //    }
      int ans=getSum(num);
      while(ans>=10){
        ans=getSum(ans);
      }
      return ans;
    }
};