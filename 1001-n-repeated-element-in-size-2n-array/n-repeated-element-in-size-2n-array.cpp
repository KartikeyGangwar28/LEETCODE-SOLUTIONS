class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int>m;
        int n=nums.size()/2;
        for(int x:nums)m[x]++;
        for(auto&x:m){
            if(x.second==n){
                return x.first;
            }
        }
        return nums[0];
    }
};