class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n=nums.size();
        //sort(nums.begin(),nums.end());
        int mx=*max_element(nums.begin(),nums.end());
        int count=0;
        for(int i=0;i<n;i++){
           count+=mx-nums[i];
        }
        return count;
    }
};