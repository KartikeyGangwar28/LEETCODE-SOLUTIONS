class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        if(n==2){
            return ((nums[0]-1)*(nums[1]-1));
        }
        int mx=nums[n-1],mi=n-1,smx=INT_MIN;
        for(int i=0;i<n;i++){
            if(nums[i]>mx){
                mx=nums[i];
                mi=i;
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]<=mx&&nums[i]>smx&&i!=mi){
                smx=nums[i];
            }
        }
        return ((mx-1)*(smx-1));
    }
};