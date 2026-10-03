class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int n=s.size();
        int ans=0;
        unordered_map<char,int>mp;
        for(int i=0;i<n;i++)mp[t[i]]=i;
        for(int i=0;i<n;i++){
            ans+=abs(i-mp[s[i]]);
        }
        return ans;
    }
};