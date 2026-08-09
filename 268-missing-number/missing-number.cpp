class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int n=nums.size(); //either this arithmetic method ya fir cyclic sort ya fir xor;
        int ans1=0,ans2=0;
        for(int i=1;i<=n;i++){
             ans1=ans1^i;
        }
        for(int i=0;i<n;i++){
              ans2=ans2^nums[i];
        }
        return ans1^ans2;
    }
};