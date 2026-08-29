class Solution {
public:
    int maxProductDifference(vector<int>& nums){//find max,smax,min and smin 
     int mx=nums[0],smax=INT_MIN;
     int mn=nums[0],smin=INT_MAX;
     int n=nums.size();
     for(int i=1;i<n;i++){
        if(nums[i]>=mx){
            smax=mx;
            mx=nums[i];
        }
        if(nums[i]<mx&&nums[i]>smax){
            smax=nums[i];
        }
        if(nums[i]<=mn){
            smin=mn;
            mn=nums[i];
        }
        if(nums[i]<smin&&nums[i]>mn){
            smin=nums[i];
        }
     }
if(smin==INT_MAX)smin=mn;
if(smax==INT_MIN)smax=mx;
cout<<smax<<" "<<smin;
     return (mx*smax)-(mn*smin);

    }
};