class Solution {
public:
    int findLHS(vector<int>& nums) {
       int n=nums.size();
      int ans=0;
      unordered_map<int,int>mp;
      for(int x:nums){
        mp[x]++;
      }
      for(auto&it:mp){
        int first=it.first;
        if(mp.find(first-1)!=mp.end()){
            int freq=mp[first-1];
            ans=max(ans,freq+it.second);
        }
         if(mp.count(first+1)!=0){
            int freq=mp[first+1];
            ans=max(ans,freq+it.second);
        }
      }
      return ans;
    }
};