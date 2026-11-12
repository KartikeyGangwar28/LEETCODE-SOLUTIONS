class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n=nums.size(),ans=0;
        for(int i=0;i<n-1;i++){
            int start=i;
            while(i<n-1&&nums[i+1]>nums[i]){
                  i++;
            }
            ans=max(ans,i-start+1);
            //i=max(0,i-1);
            int end=i;
            while(i<n-1&&nums[i+1]<nums[i]){
                i++;
            }
            ans=max(ans,i-end+1);
             if(i<n-1&&nums[i]==nums[i+1])continue;
             else i--;
            //if(i!=0)i--;
          // i=max(0,i-1);
        }

        return max(ans,1);
    }
};