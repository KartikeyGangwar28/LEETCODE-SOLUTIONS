class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        vector<int>mp(1001);
        int n=nums.size();
        for(int i=0;i<n-1;i++){
              if(nums[i]==key)mp[nums[i+1]]++;
        }
        int ans=0,mx=INT_MIN;
        int i=0;
        for(int it:mp){
            if(it>mx){
                mx=it;
                ans=i;
            }
            i++;
        }
        return ans;
    }
};