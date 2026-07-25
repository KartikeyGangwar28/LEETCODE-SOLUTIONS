class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n=nums.size();
        if(n<=1){
            return -1;
        }
        int maxi=0;
        for(int i=0;i<n;i++){
            if(nums[i]>nums[maxi]){
                maxi=i;
            }
        }
        bool found=true;
        for(int i=0;i<n;i++){
            if(i==maxi){
                continue;
            }
            else if(nums[i]*2>nums[maxi]){
                   found = false;
            }
            
        }
       if(found){
        return maxi;
       }
       return -1;
    }
};