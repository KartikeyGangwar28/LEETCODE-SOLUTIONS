class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        int x=ans.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            if(mp[nums[i]]>0){
                ans.push_back(nums[i]);
                x++;
            }
            else{
                mp[nums[i]]++;
            }
            if(x==2){
                return ans;
            }
        }
        return ans;
    }
};