class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
       // vector<int>ans;
        map<int,int>mp;
        int n=nums.size(),m=nums[0].size();
        for(int i=0;i<1;i++){
         for(int j=0;j<m;j++){
            if(mp[nums[i][j]]==0)mp[nums[i][j]]=1;
         }
        }
        for(int i=1;i<n;i++){
            int m=nums[i].size();
            for(int j=0;j<m;j++){
                int x=nums[i][j];
                if(mp[x]<i+1)mp[x]+=1;
            }
        }
        vector<int>ans;
        for(auto&[val,freq]:mp){
            if(freq==n){
                ans.push_back(val);
            }
        }
        return ans;
    }

};