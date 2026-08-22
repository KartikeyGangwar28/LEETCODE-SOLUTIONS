class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int s1=0,s2=0;
        int n=nums.size();
        if(n==1){
            return nums[0];
        }
        else if(n==2){
            return nums[0]-nums[1];
        }
        for(int i=0,j=1;i<n||j<n;i+=2,j+=2){
            if(i<n){
              s1+=nums[i];
            }
            if(j<n){
              s2+=nums[j];
            }
        }
        return s1-s2;
    }
};