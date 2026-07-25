class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
         int n=nums.size();
         if(n<=2){
            return -1;
         }
        int max=*max_element(nums.begin(),nums.end());
        int min=*min_element(nums.begin(),nums.end());
       
        for(int i=0;i<n;i++){
            if(nums[i]>min&&nums[i]<max){
                return nums[i];
            }
        }
        return -1;
    }
};