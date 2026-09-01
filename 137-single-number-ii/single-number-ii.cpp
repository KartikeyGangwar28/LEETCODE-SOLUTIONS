class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>m;
        for(int x:nums)m[x]++;
      for(int x:nums){
        if(m[x]==1){
            return x;
        }
      }
      return -1;
    }
};