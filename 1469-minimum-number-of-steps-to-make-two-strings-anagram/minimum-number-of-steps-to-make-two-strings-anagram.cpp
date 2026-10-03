class Solution {
public:
    int minSteps(string s, string t) {
       int n=s.size();
       unordered_map<char,int>mp;
       for(char c:t)mp[c]++;
       int count=0;
       for(int i=0;i<n;i++){
        if(mp[s[i]]==0)count++;
        if(mp[s[i]]>0)mp[s[i]]--;
       }
        return count;
    }
};