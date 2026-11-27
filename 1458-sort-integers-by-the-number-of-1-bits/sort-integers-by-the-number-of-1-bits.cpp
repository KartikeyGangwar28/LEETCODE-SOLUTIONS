class Solution {
public:
// int count(int x){
//     int c=0;
//     while(x!=0){
//         if(x%2==1)c++;
//         x/=2;
//     }
//     return c;
// }
// struct cmp{
//      bool operator()(const pair<int,int>&a,const pair<int,int>&b){
//         if(a.first!=b.first)return a.first>b.first;
//         return a.second>b.second;
//      }
// }; coorect but not needed-aym
    vector<int> sortByBits(vector<int>& arr) {
      priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
      for(int x:arr){
        pq.push({__builtin_popcount(x),x});
      }
      vector<int>ans;
      while(!pq.empty()){
        ans.push_back(pq.top().second);
        pq.pop();
      }
      return ans;
      
    }
};
// vector<int> sortByBits(vector<int>&arr) {
//     vector<pair<int,int>>v;
//     for(int x:arr){
//         v.push_back({__builtin_popcount(x),x});
//     }
//     sort(v.begin(),v.end());
//     vector<int>ans;
//     for(auto p:v){
//         ans.push_back(p.second);
//     }
//     return ans;
// }
// };