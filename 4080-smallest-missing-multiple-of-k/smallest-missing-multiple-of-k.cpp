class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        vector<int>v(10000);
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]%k==0){
                v[nums[i]]++;
            }
        }
        int ans=0;
        for(int i=k;i<v.size();i+=k){
            if(v[i]==0){
                ans=i;
                break;
            }
        }
        return ans;
    }
};