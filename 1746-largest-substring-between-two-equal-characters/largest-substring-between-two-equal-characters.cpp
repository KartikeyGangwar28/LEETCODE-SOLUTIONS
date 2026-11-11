class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        unordered_map<char,vector<int>>mp;
        int i=0;
        for(char c:s){
            mp[c].push_back(i);
            i++;
        }
        int ans=-1;
        for(auto&[c,v]:mp){
            if(v.size()>=2){
                ans=max(ans,v[v.size()-1]-v[0]-1);
            }
        }
        return ans;
    }
};