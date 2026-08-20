class Solution {
public:
bool increasing(vector<int>& nums){
    int n=nums.size();
   for(int i=0;i<n-1;i++){
    if(nums[i+1]<nums[i]){
return false;
    }
   }
   return true;
}
bool decreasing(vector<int>& nums){
     int n=nums.size();
   for(int i=0;i<n-1;i++){
    if(nums[i+1]>nums[i]){
return false;
    }
   }
   return true;
}
    bool isMonotonic(vector<int>& nums) {
        int n=nums.size();
        if(n<=1){
            return true;
        }
        for(int i=0;i<n-1;i++){
                if(nums[i+1]>nums[i]){
                    return increasing(nums);
                }
                else if(nums[i+1]<nums[i]){
                    return decreasing(nums);
                }
        } 
        return true;
    }
};