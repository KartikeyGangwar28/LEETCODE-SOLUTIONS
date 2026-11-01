class Solution {
public:
struct Compare{
    bool operator()(pair<int,int>a,pair<int,int>b)const{
        if(a.first!=b.first)return a.first>b.first;
        return a.second<b.second;
    }
};
    vector<int> frequencySort(vector<int>& nums) {
       unordered_map<int,int>mp;
       for(int x:nums)mp[x]++;//num -frequency;
       //if same frequency then sort in decreasing order;
     priority_queue<pair<int,int>,vector<pair<int,int>>,Compare>pq;
       for(auto&it:mp){
             pq.push({it.second,it.first});
       }
       vector<int>ans;
       while(!pq.empty()){
        int val=pq.top().second;
        int f=pq.top().first;
        pq.pop();
        while(f--){
            ans.push_back(val);
        }
       }
       return ans;
    }
};