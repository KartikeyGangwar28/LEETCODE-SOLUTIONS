class Solution {
public:
    int sumCounts(vector<int>& nums) {
       int n=nums.size();
       int ans=0;
       for(int i=0;i<n;i++){
        unordered_set<int>mp;
        int count=0;
        int prev=0;
        for(int j=i;j<n;j++){
            mp.insert(nums[j]);
            ans+=pow(mp.size(),2);
        }
        
       }
       return ans;
    } 
};