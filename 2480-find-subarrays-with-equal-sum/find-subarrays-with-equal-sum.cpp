class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        unordered_map<int,int>mp;
        int l=0,r=0;
        int n=nums.size();
        if(n<2)return false;
        int sum=0;
       sum=nums[0]+nums[1];
       r=1;
        mp[sum]++;
        while(r<n){
            sum-=nums[l];
            l++;
            r++;
          if(r<n)sum+=nums[r];
          else break;
            mp[sum]++;
           // cout<<sum<<"\n";
        }
        int ans=0;
        for(auto&it:mp){
            ans=max(ans,it.second)
        ;}
        return ans>=2;

    }
};