class Solution {
public:
    bool divideArray(vector<int>& nums) {
               int n=*max_element(nums.begin(),nums.end());
       vector<int>mp(n+1);
        for(int x:nums){
            mp[x]++;
        }
       for(int i=0;i<n;i++){
        if(mp[i]%2!=0)return false;
       }
        return true;
    }
};