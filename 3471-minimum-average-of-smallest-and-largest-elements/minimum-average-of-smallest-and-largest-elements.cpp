class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        float mn=FLT_MAX;
        for(int i=0,j=n-1;i<j;i++,j--){
            float avg=((nums[i]+nums[j])/2.0);
            mn=min(mn,avg);
        }
        return mn;
    }
};