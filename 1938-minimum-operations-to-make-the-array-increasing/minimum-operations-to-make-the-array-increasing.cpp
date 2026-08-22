class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size();
        int steps=0;
        int ans=0;
        for(int i=0;i<n-1;i++){
            if(nums[i+1]<=nums[i]){
                steps=nums[i]-nums[i+1]+1;
                ans+=steps;
                nums[i+1]+=steps;
            }
        }
        return ans;
    }
};