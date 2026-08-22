class Solution {
public:
int digitsum(int n){
    int ans=0;
    while(n!=0){
      ans+=n%10;
      n=n/10;
    }
    return ans;
}
int product(int n){
    int ans=1;
    while(n!=0){
      ans*=n%10;
      n=n/10;
    }
    return ans;
}
    bool checkDivisibility(int n) {
        return n%(digitsum(n)+product(n))==0;
    }
};