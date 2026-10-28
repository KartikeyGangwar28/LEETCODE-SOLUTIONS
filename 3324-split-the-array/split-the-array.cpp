class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        int n=nums.size();
      //so basically n/2,n/2 ki 2 array means atleast n/2  unique element;
      unordered_map<int,int>mp;
      for(int x:nums)mp[x]++;
      for(auto&it:mp){
        if(it.second>2)return false;
      }
      return mp.size()>=n/2;
    }
};