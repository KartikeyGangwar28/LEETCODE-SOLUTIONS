class Solution {
public:
vector<vector<int>>ans;
vector<int>temp;
void generate(vector<int>&nums,int i,int n){
if(i>=n){
    ans.push_back({temp});
    return;
}
temp.push_back(nums[i]);
generate(nums,i+1,n);
temp.pop_back();
generate(nums,i+1,n);
}
    vector<vector<int>> subsets(vector<int>& nums) {
        generate(nums,0,nums.size());
        return ans;
        
    }
};