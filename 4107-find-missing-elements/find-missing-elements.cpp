class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int mi=*min_element(nums.begin(),nums.end());
        int ma=*max_element(nums.begin(),nums.end());
        vector<int>ans;
        unordered_set<int>s(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=mi;i<ma;i++){
            if(s.find(i)==s.end()){
                ans.push_back(i);
            }
        }
        return ans;
    }
};