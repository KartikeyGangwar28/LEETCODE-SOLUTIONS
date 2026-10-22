class Solution {
public:
bool check(int x){
    int ans=0;
    while(x!=0){
        ans+=x%10;
        x/=10;
    }
    return ans%2==0;
}
    int countEven(int nums) {
        int ans=0;
        for(int i=1;i<=nums;i+=1){
            if(check(i))ans++;
        }
        return ans;
    }
};