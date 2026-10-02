class Solution {
public:
    string frequencySort(string s) {
        priority_queue<pair<int,char>>pq;
        unordered_map<char,int>mp;
        int n=s.size();
        for(char c:s){
            mp[c]++;
        }
        for(auto&it:mp){
            pq.push({it.second,it.first});
        }
        string ans;
        while(!pq.empty()){
             int a=pq.top().first;
             char c=pq.top().second;
             pq.pop();
             while(a--){
                ans+=c;
             }

        }
        return ans;
    }
};