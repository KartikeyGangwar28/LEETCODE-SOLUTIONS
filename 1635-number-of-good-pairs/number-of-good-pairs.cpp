class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count=0;//optimise later;
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int x:nums){
            mp[x]++;
        }
        for(auto&it:mp){
            if(it.second>=2)count+=((it.second)*(it.second-1))/2;
        }
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         if(nums[i]==nums[j]){
        //             count++;
        //         }
        //     }
        // }
        return count;
    }
};