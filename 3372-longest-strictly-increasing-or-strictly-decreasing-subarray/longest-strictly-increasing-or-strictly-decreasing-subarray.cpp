class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n=nums.size(),ans=0;
        for(int i=0;i<n-1;i++){
            if(nums[i+1]>nums[i]){
                int j=i,count=0;
                while(j+1<n&&nums[j+1]>nums[j]){
                    j++;
                    count++;
                }
                ans=max(ans,count+1);
            }
             else if(nums[i+1]<nums[i]){
                int j=i,count=0;
                while(j+1<n&&nums[j+1]<nums[j]){
                    j++;
                    count++;
                }
                ans=max(ans,count+1);
            }
            cout<<ans<<"\n";
        }
        return max(ans,1);
    }
};