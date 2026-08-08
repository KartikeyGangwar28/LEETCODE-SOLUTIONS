class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
       double sub=0;
       int n=nums.size();
    //    if(n==1&&k==1){
    //     return nums[0];
    //    }
       double avg=0,ans=INT_MIN;
        int left=0,right=left+k-1;
        for(int i=left;i<=right;i++){
               sub+=nums[i];
        }
        avg=sub/k;
        ans=max(ans,avg);
        while(right<n){
             sub-=nums[left];
             left++;
             right++;
             if(right>=n){
                return ans;
             }
             sub+=nums[right];
             avg=sub/k;
             ans=max(ans,avg);
        }
        // while(right<n){
        //     sub=0;
        //     avg=0;
        //     right=left+k-1;
        //     int i=left;
        //     while(i<=right){
        //         sub+=nums[i];
        //         i++;
        //     }
        //     left++;
        //      //cout<<sub<<endl;
        //     avg=sub/k;
        //     ans=max(ans,avg);
        // }
        return ans;
    }
};