class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int>mp;
        priority_queue<pair<int,int>>pq;
        int n=arr.size();
        int mx=INT_MIN,smx=INT_MIN;
        for(int x:arr)mp[x]++;
        for(auto&[val,freq]:mp){
            pq.push({freq,val});
        }
        int ans=0;
        int count=0;
        while(ans<n/2&&!pq.empty()){
            ans+=pq.top().first;
            count++;
            pq.pop();
        }
        return count;
    }
};