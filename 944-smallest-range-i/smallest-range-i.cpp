class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
      sort(nums.begin(),nums.end());
      int n=nums.size();
       if(abs(nums[0]-nums[n-1])<=2*k)return 0;
       return nums[n-1]-k-nums[0]-k;
    }
};