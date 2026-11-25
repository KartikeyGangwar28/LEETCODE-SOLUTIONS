class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int ans=0;
        for(int i=n-1;i>=2;i--){
            int peri=0;
            int a=nums[i],b=nums[i-1],c=nums[i-2];
            if(b+c>a){//sum of any 2 sides must be greater than the rest 3rd side or if sum of 2 smaller sides is greater than 3rd then they are triangle valid
                  peri=a+b+c;
                  ans=max(ans,peri);
            }
            if(peri!=0)return ans;
        }
        return ans;
    }
};