class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& g) {
        map<int,stack<int>>mp;
        int i=0;
        for(int x:g){
            mp[x].push(i);
            i++;
        }
        vector<vector<int>>ans;
        while(mp.size()!=0){
           for(auto&it:mp){
              int x=it.first;
              vector<int>temp;
              while(!it.second.empty()){
                temp.push_back(it.second.top());
                it.second.pop();
                if(temp.size()==x){
                    ans.push_back(temp);
                    temp.clear();
                }
              }
              mp.erase(x);
           }
        }
        return ans;
      
    }
};