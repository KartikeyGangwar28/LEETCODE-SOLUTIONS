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
        for(int i=0;i<n;i++){
            if(i%2==0){
                s1+=nums[i];
            }
            else{
                s2+=nums[i];
            }
        }
        return s1-s2;
    }
};