class Solution {
public:
int encrypt(int x){
    int mx=INT_MIN;
    int digit=0;
    while(x!=0){
        mx=max(mx,x%10);
        x/=10;
        digit++;
    }
    int num=0;
    while(digit--){
        num=num*10+mx;
    }
    return num;
}
    int sumOfEncryptedInt(vector<int>& nums) {
        int ans=0;
        for(int x:nums)ans+=encrypt(x);
        return ans;
    }
};