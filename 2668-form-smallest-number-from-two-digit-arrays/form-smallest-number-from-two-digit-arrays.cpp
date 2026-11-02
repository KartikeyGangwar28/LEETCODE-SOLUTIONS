class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        vector<int>mp(100000);
        for(int z:nums1){mp[z]++;}
        int ans=INT_MAX;
        for(int z:nums2){
            if(mp[z]!=0){
                ans=min(ans,z);
            }
        }
        if(ans!=INT_MAX)return ans;
        int x=*min_element(nums1.begin(),nums1.end());
        int y=*min_element(nums2.begin(),nums2.end());
        if(x<y)return x*10+y;
        return y*10+x;
    }
};