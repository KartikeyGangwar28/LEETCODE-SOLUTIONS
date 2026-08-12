class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
      int n=nums.size();
      if(n<=1){
        return ans;
      }
      unordered_map<int,int>x;
      for(int i=0;i<n;i++){ 
                        x[nums[i]]++;
                 if(x[nums[i]]>1){
                    ans.push_back(nums[i]);
                 }
                 
                 
      }
      return ans;
    }
};