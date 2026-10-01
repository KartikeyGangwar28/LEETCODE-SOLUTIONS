class Solution {
public:
int digitRange(int x){
    if(x<=9)return 0;
    int mn=INT_MAX,mx=INT_MIN;
    while(x!=0){
        mn=min(mn,x%10);
        mx=max(mx,x%10);
        x/=10;
    }
    return mx-mn;
}
    int maxDigitRange(vector<int>& nums) {
         int n=nums.size();
vector<int>v;
int mx=INT_MIN;
         int ans=0;
         for(int i=0;i<n;i++){
            int x=digitRange(nums[i]);
            v.push_back(x);
            mx=max(mx,x);
         }
         for(int i=0;i<n;i++){
            if(v[i]==mx){
                ans+=nums[i];
            }
         }

return ans;
    }
};