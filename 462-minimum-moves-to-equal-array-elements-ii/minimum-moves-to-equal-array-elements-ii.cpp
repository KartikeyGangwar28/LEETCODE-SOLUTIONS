class Solution {
public:
    int minMoves2(vector<int>& nums) {
    //     int mx=*max_element(nums.begin(),nums.end());
    //     int target=0;
    //     if(mx%2==0){
    //         target=(mx/2)+1;
    //     }
    //     else target=(mx+1)/2;
    //     cout<<target;
    //     int ans=0;
    //     for(int x:nums){
    //         if(x!=target){
    //             ans+=abs(x-target);
    //         }
            
    //     }
    //     return ans;
    // long long int sum=0;
     int n=nums.size();
    // for(int x:nums)sum+=x;
    // long long int avg=(sum+1)/n;
    // long long int ans=0;
    // for(int x:nums){
    //     ans+=abs(avg-x);
    // }
    // return ans;
    sort(nums.begin(),nums.end());
    int pivot=nums[n/2];
//    long long int sum=0;
//    for(int x:nums)sum+=x;
//    long long int avg=sum/n;
   int ans=0;
   for(int x:nums)ans+=abs(pivot-x);
    return ans;

    }
};