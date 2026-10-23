class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
    unordered_map<int,int>mp;
    for(int i=left;i<=right;i++){
        mp[i]++;
    }
    int n=ranges.size();
    for(int i=0;i<n;i++){
        int start=ranges[i][0];
        int end=ranges[i][1];
        for(int j=start;j<=end;j++)mp[j]--;
    }
    for(auto&it:mp){
        if(it.second>=1)return false;
    }
    return true;
    }
};