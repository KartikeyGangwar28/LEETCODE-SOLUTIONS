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
// int sum(int x){
//     if(x<10)return x;
//    int s=0;
//     while(x!=0){
//         s+=x%10;
//         x=x/10;
//     }
//     cout<<s<<" ";
//     return s;
// }
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
       // cout<<start<<" "<<end;
    return calculate(start,end);
    }
};