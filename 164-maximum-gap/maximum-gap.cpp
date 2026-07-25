class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n=nums.size();
        if(n<=1){
            return 0;
        }
            sort(nums.begin(),nums.end());
        int ans=0;
       for(int l=0,r=l+1;r<=n-1;l++,r++){
           int diff=abs(nums[r]-nums[l]);
           ans=max(ans,diff);
       }
       return ans;
     
    }
};