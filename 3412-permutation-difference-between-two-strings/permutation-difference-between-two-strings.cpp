class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int n=s.size();
        int ans=0;
        vector<int>mp(257);
        for(int i=0;i<n;i++)mp[t[i]]=i;
        for(int i=0;i<n;i++){
            ans+=abs(i-mp[s[i]]);
        }
        return ans;
    }
};