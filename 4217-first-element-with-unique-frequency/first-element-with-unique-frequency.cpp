class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int x:nums)mp[x]++;
         unordered_map<int,int>feq;
         for(auto&it:mp){
           feq[it.second]++;
         }
        for(int x:nums){
            if(feq[mp[x]]==1)return x;
        }
        return -1;
    }
};