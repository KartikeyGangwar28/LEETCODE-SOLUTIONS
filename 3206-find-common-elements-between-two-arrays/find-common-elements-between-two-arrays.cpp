class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mp;
        unordered_map<int,int>mm;
        for(int x:nums1)mp[x]++;
        for(int x:nums2)mm[x]++;
        int val=0;
        for(auto&it:mp){
            if(mm[it.first]!=0){
                   val+=it.second;
            }
            
        }
        vector<int>ans;
        ans.push_back(val);
        val=0;
        for(auto&it:mm){
            if(mp[it.first]!=0){
                   val+=it.second;
            }
            
        }

ans.push_back(val);

 
return ans;

    }
};