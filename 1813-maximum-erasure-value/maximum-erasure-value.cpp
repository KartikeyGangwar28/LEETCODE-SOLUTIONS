class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n=nums.size();
        int low=0,r=0;
        int sum=0,ans=INT_MIN;
        unordered_map<int,int>mp;
        while(r<n){
           if(mp[nums[r]]>=1){
            mp[nums[low]]--;
            sum-=nums[low];
            low++;
           }
           else{
            sum+=nums[r];
            ans=max(ans,sum);
             mp[nums[r]]++;
             r++;
           }
        }
        return ans;
    }
};