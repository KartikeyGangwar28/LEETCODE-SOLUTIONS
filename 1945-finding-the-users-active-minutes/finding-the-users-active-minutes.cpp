class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        //total unique minutes active for each id;
        vector<int>ans(k);
        unordered_map<int,set<int>>mp;
        int n=logs.size();
        for(int i=0;i<n;i++){
            int x=logs[i][0],y=logs[i][1];
            //[logs[i][0]].insert(logs[i][i]);
            if(mp[x].find(y)==mp[x].end()){
                mp[x].insert(y);
            }
        }
       // vector<int>count;
        for(auto&[key,st]:mp){
            if(st.size()!=0){
                 //count.push_back(st.size());
                 ans[st.size()-1]++;
            }
           // cout<<st.size()<<" ";
        }
        return ans;
    }
};