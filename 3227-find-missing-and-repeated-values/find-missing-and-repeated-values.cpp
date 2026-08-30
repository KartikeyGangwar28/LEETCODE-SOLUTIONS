class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        unordered_map<int,int>mp;
        for(auto& x:grid)
            for(int m:x)mp[m]++;
        int doub=-1,miss=-1;
    for(int i=1;i<=n*n;i++){
        if(doub!=-1&&miss!=-1){
            return {doub,miss};
        }
        if(mp[i]==2)doub=i;
        if(mp[i]==0)miss=i;
    }
    return {doub,miss};
    }
};