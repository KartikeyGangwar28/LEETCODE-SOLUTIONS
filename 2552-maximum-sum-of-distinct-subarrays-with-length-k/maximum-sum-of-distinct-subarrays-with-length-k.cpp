class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int l=0,r=0;
        int n=nums.size();
        unsigned long long int ans=0;
        unsigned long long int sum=0;
        unordered_map<int,int>mp;
        int count=0;
        while(r<n){
            if(r-l>=k){
                sum-=nums[l];
                mp[nums[l]]--;
                l++;
                count-=1;
            }
            else if(mp[nums[r]]==0){
                sum+=nums[r];
                mp[nums[r]]++;
                r++;
                count+=1;
                if(count==k){
                    ans=max(ans,sum);
                }
            }
            else if(mp[nums[r]]!=0){
                sum-=nums[l];
                mp[nums[l]]--;
                count-=1;
                l++;
            }
           

        }
        return ans;
    }
};