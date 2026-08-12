class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
        unordered_map<int,int>m;
        int n=nums.size();
            if(n<=1){
                return ans;
            }
        for(int x:nums)m[x]++;    
        
        for(auto&it:m){
            if(it.second>1){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};