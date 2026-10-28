class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        if(nums.size()<=1)return nums;
        // vector<int>hash(1000001,0);
        // int mx=INT_MIN;
        // for(int x:nums){hash[x]++;mx=max(mx,x);}
        vector<int>ans;
        // for(int i=1;i<=mx+1;i++){
        //     if(hash[i]==1&&hash[i-1]==0&&hash[i+1]==0)ans.push_back(i);
        // }
        unordered_map<int,int>mp;
        for(int x:nums)mp[x]++;
        for(auto&it:mp){
            if(it.second==1){
                if(mp.count(it.first-1)==0&&mp.count(it.first+1)==0)ans.push_back(it.first);
            }
        }
        //if(hash[0]==1&&hash[1]==0)ans.push_back(0);
        return ans;
    }
};