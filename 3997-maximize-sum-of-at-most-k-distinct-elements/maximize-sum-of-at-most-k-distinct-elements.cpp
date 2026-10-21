class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
      priority_queue<int>pq;
      for(int x:nums)pq.push(x);
      vector<int>v;
      int z=k;
      while((z!=0)&&!pq.empty()){
        int x=pq.top();
        pq.pop();
        if(v.size()==0||v.back()!=x){
            v.push_back(x);
            z--;
        }
      }
       return v;
    }
};