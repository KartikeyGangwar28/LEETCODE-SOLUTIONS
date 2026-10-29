class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>>ans;
        int n=nums.size();
        int pushed=0;
        unordered_map<int,int>mp;
        for(int x:nums){
              mp[x]++;
        }
        
        while(pushed!=n){
            vector<int>temp;
            for(auto&it:mp){
                if(it.second!=0){
                     temp.push_back(it.first);
                     it.second--;
                     pushed++;
                }
            }
           if(temp.size()!=0)ans.push_back(temp);
        }
        return ans;
    }
};