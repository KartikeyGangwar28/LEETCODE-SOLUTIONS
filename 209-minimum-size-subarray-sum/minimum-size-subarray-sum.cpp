class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int l=0,r=0,ans=INT_MAX;
        int sum=0;
        while(r<n&&l<n){
            if(sum<target){
                sum+=nums[r];
                r++;
            }
          
         while(sum>=target){
            ans=min(ans,r-l);
            sum-=nums[l];
                l++;
          }
                
            }
              
        if(ans == INT_MAX){
            return 0;
        }
        return ans;
      
    }
};