class Solution {
public:
int sum(int x){
    if(x<=9)return x;
    int ans=0;
    while(x!=0){
        ans+=x%10;
        x/=10;
    }
    return ans;
}
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int n=sum(x);
        if(x%n==0)return n;
        return -1;;
    }
};