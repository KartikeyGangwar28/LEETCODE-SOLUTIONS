class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>m;
        for(int x:nums){
            if(x%2==0){
            m[x]++;
            }
        }
    int ans=-1;
        for(int i=0;i<n;i++){
            // if(m.find(nums[i])!=m.end()){
            //     if(m[nums[i]]==1){
            //         return nums[i];
            //     }
            // }
            if(m[nums[i]]==1){
                return nums[i];
            }
        }
        return ans;
    }
};