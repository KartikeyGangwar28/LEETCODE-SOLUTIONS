class Solution {
public:
    int minDeletion(string s, int k) {
        // unordered_set<char>st(s.begin(),s.end());
        // return (st.size()-k);
        unordered_map<char,int>mp;
        for(char c:s)mp[c]++;
        if(mp.size()<=k)return 0;
        priority_queue<pair<int,char>,vector<pair<int,char>>,greater<pair<int,char>>>pq;
        for(auto&it:mp){
            pq.push({it.second,it.first});
        }
        int ans=0;
        while(pq.size()!=k){
            ans+=pq.top().first;
            pq.pop();
        }
        return ans;
    }
};