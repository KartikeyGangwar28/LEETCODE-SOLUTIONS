class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        int n=nums.size();
        int ans=0;
        unordered_map<int,int>mp;
        for(int x:nums)mp[x]++;
      for(int i=0;i<n;i++){
        if(mp[nums[i]]%k==0)ans+=nums[i];
      }
        return ans;
    }
};