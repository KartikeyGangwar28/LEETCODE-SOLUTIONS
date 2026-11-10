class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int>ans;
        int n=s.size();
        unordered_map<char,vector<int>>mp;
        int i=0;
      for(char z:s){
        if(z==c)mp[c].push_back(i);
        i++;
      }
      for(int i=0;i<n;i++){
        int mn=INT_MAX;
          for(auto&[x,v]:mp){
            int a=v.size();
           for(int j=0;j<a;j++){
            mn=min(mn,abs(i-v[j]));
           }

          }
          ans.push_back(mn);
      }
        return ans;
    }
};