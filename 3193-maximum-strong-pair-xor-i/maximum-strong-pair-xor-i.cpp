class Solution {
public:
    int maximumStrongPairXor(vector<int>& nums) {
        int n=nums.size();
        int ans=INT_MIN;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                      int diff=abs(nums[i]-nums[j]);
                      if(diff<=min(nums[i],nums[j])){
                        ans=max(ans,nums[i]^nums[j]);
                      }
            }
        }
        return max(ans,0);
    }
};