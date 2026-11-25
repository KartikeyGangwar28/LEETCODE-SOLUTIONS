class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int ans=0;
        for(int i=n-1;i>=2;i--){
            int peri=0;
            int a=nums[i],b=nums[i-1],c=nums[i-2];
            if(b+c>a){
                  peri=a+b+c;
                  ans=max(ans,peri);
            }
        }
        return ans;
    }
};