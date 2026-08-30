class Solution {
public:
bool isprime(int x){
    if(x<=1){
        return false;
    }
    if(x<=3){
        return true;
    }
    for(int i=2;i<=x/2;i++){
        if(x%i==0)return false;
    }
    return true;
}
int calculate(int start,int end){
    int ans=0;
    for(int i=start;i<=end;i++){
       if(isprime(i)){
        ans+=i;
       }
    }
    return ans;
}
    int sumOfPrimesInRange(int n) {
     int rev=0;
        int temp=n;
        while(temp!=0){
            rev=rev*10+temp%10;
            temp=temp/10;
        }
       int start=min(n,rev);
       int end=max(n,rev);
    return calculate(start,end);
    }
};