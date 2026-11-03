class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& nums) {
        int ans=0;
        int x=nums.size();
        for(int i=1;i<x-1;i++){
            if(nums[i+1]!=nums[i]&&nums[i-1]!=nums[i])ans++;
        } 
        if(nums[0]!=nums[x-1]&&nums[0]!=nums[1])ans++;
        if(nums[x-1]!=nums[0]&&nums[x-1]!=nums[x-2])ans++;
        return ans;
    }
};