class Solution {
public:
    int minimumCardPickup(vector<int>& card) {
        unordered_map<int,vector<int>>mp;
        int i=0;
        int n=card.size(),ans=INT_MAX;
        for(int x:card){mp[x].push_back(i);i++;}
        for( i=0;i<n;i++){
            if(mp[card[i]].size()>=2){
                vector<int>v=mp[card[i]];
                int x=v.size();
                for(int i=0;i<x-1;i++){
                    ans=min(ans,v[i+1]-v[i]+1);
                }
            }
        }
        if(ans==INT_MAX)return -1;
        return ans;
    }
};