class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        if(multiplier==1)return nums;
        int n=nums.size();
       // sort(nums.begin(),nums.end());
        while(k--){
            int mn=INT_MAX;
            int ind=-1;
            for(int i=0;i<n;i++){
                if(nums[i]<mn){
                    mn=nums[i];
                    ind=i;
                }
            }
            //cout<<mn;
            mn*=multiplier;
            nums[ind]=mn;
        }
        return nums;
    }
};