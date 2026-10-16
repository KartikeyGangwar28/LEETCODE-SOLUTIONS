class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string,int>mp;
        priority_queue< pair<int, string>,
                        vector<pair<int, string>>,
                       decltype([](const auto& a, const auto& b) {
                                   if (a.first != b.first)
                                          { return a.first < b.first;}
                                     return a.second > b.second;
    })>pq;
        for(string s:words)mp[s]++;
        for(auto&[key,val]:mp){
            pq.push({val,key});
        }
        vector<string>ans;
        while(k--){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};