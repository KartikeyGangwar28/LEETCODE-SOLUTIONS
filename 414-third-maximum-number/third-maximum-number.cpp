class Solution {
public:
    int thirdMax(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       int n=nums.size();
       if(n<=2){
        return nums[n-1];
       }
       int max=*max_element(nums.begin(),nums.end());
       int smax=nums[0];
       int tmax=nums[n-1];
       for(int i=0;i<n;i++){
        if(nums[i]<max&&nums[i]>smax){
            tmax=smax;
            smax=nums[i];
        }
       }
        return tmax;
    }
};