class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
      unordered_map<int,int>m;
      int n=arr.size();
      for(int i=0;i<n;i++){
        m[arr[i]]++;
      }
    set<int>s;
     for(auto&it:m){
         if(s.find(it.second)!=s.end()){
            return false;
         }
         s.insert(it.second);
     }
     return true;
     }
     
};