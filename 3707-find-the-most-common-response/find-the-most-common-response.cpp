class Solution {
public:
    string findCommonResponse(vector<vector<string>>& responses) {
        int n=responses.size();
       map<string,int>mp;
        for(int i=0;i<n;i++){
            int x=responses[i].size();
            unordered_set<string>st;
            for(int j=0;j<x;j++){
                if(st.find(responses[i][j])==st.end()){
                     mp[responses[i][j]]++;
                     st.insert(responses[i][j]);
                }
            }
        }
        string ans="";
        int mx=INT_MIN;
        for(auto&it:mp){
            if(it.second>mx){
                mx=it.second;
                ans=it.first;
            }
        }
        return ans;
    }
};