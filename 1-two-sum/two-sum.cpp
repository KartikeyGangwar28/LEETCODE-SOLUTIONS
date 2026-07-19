class Solution {
public:
    vector<int> twoSum(vector<int>& v, int target) {
       int n=v.size();
unordered_map<int,int>m;
       for(int i=0;i<n;i++){
        int more=target-v[i];
        if(m.find(more)!=m.end()){
            return {m[more],i};
        }
m.emplace(v[i],i);
       }
       return{-1,-1};
    }
};