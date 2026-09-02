class Solution {
public:
    bool uniformArray(vector<int>& nums) {
        int n=nums.size();
        bool allEven=true,allOdd=true;
        for(int i=0;i<n;i++){
             if(nums[i]%2==0)allOdd=false;
             if(nums[i]%2!=0)allEven=false;
        }
        if(allOdd||allEven)return true;
        bool evenDiff=false,OddDiff=false;
    //   for(int i=0;i<n-1;i++){
    //           if(nums[i]%2==0){
    //             continue;
    //           }
    //           else if(i!=0&&(nums[i]-nums[i-1])%2!=0)){
    //             evenDiff=false;
    //           }
    //   }
    //   for(int i=0;i<n-1;i++){
    //     if(nums[i]%2!=0)continue;

    //   }
    return true;
    }
};