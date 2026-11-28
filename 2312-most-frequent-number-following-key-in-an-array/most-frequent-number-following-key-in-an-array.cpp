class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        unordered_map<int,int>mp;
        int n=nums.size();
        for(int i=0;i<n-1;i++){
              if(nums[i]==key)mp[nums[i+1]]++;
        }
        int ans=0,mx=INT_MIN;
        for(auto&it:mp){
            if(it.second>mx){
                mx=it.second;
                ans=it.first;
            }
        }
        return ans;
    }
};