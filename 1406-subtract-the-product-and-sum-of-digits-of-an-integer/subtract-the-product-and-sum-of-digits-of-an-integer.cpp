class Solution {
public:
pair<int,int>prodSum(int n){
    int temp=n;
    int s=0,p=1;
    while(n!=0){
        s+=n%10;
        p*=n%10;
        n/=10;
    }
    return {s,p};
}
    int subtractProductAndSum(int n) {
        if(n<=9)return 0;
        pair<int,int>ans=prodSum(n);
        return ans.second-ans.first;
    }
};