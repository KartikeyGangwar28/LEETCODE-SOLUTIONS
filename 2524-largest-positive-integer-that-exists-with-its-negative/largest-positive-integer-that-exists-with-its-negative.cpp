class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_set<int>st(nums.begin(),nums.end());
        int n=nums.size();
        int ans=INT_MIN;
        for(int i=0;i<n;i++){
             if(nums[i]>0&&st.find(-nums[i])!=st.end()){
                  ans=max(ans,nums[i]);
             }
        }
        return max(ans,-1);
    }
};