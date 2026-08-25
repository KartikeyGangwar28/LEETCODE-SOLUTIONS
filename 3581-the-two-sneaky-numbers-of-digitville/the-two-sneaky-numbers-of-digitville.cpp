class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            if(mp[nums[i]]>0){
                ans.push_back(nums[i]);
            }
            else{
                mp[nums[i]]++;
            }
        }
        return ans;
    }
};