class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        vector<int>mp(51);
        int mx=0;
        for(int x:nums){mp[x]++;mx=max(mx,x);}
        int ans=0;
        // for(auto&it:mp){
        //     if(it.second==2)ans^=it.first;
        // }
        for(int i=0;i<=mx;i++){
            if(mp[i]==2)ans=ans^i;
        }
        return ans;
    }
};