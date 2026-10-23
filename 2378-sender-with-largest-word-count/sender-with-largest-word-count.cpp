class Solution {
public:
    string largestWordCount(vector<string>& m, vector<string>& s) {
        map<string,int>mp;
        int n=m.size();
        for(int i=0;i<n;i++){
            int x=m[i].size();
            int count=0;
            for(int j=0;j<x;j++){
                if(isspace(m[i][j]))count++;
            }
            count++;
            mp[s[i]]+=count;
        }
        string ans;
        int mx=INT_MIN;
        for(auto&it:mp){
            if(it.second>=mx){
                mx=it.second;
                ans=it.first;
            }
        }
        return ans;
    }
};