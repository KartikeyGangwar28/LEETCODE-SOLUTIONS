class Solution {
public:
    int arraySign(vector<int>& nums) {
        int negcount=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                return 0;
            }
            else if(nums[i]<0){
                negcount+=1;
            }
        }
        if(negcount%2==0){
            return 1;
        }
        return -1;
    }
};