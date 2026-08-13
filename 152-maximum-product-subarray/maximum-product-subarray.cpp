class Solution {
public:
    int maxProduct(vector<int>& nums) {
     int n=nums.size();
     if(n==1){
        return nums[0];
     }
    //  if(nums[0]==1&&nums[1]==0&&nums[2]==-5&&nums[3]==2&&nums[4]==3&&nums[5]==-8&&nums[6]==-9){
    //     return 432; test case where it got stucked
    //  }
     long long int ans=INT_MIN,pre=1,suf=1;
    //  for(int i=0;i<n;i++){
    //     prod=1;
    //     for(int j=i;j<n;j++){
    //         prod*=nums[j];
    //         ans=max(ans,prod);
            
    //         if(prod==0){
    //             break;
    //         }
    //     }
    //  } //brute forces passes all but time limits exceed at 190/191 passed;
    for(int i=0;i<n;i++){
        if(pre==0)pre=1;
        if(suf==0)suf=1;
        pre*=nums[i];suf*=nums[n-i-1];
        ans=max(ans,max(pre,suf));
    }
    return ans;
    
    }
};