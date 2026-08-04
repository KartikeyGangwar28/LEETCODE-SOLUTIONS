class Solution {
public:
    char findTheDifference(string s, string t) {
     int n=s.size();
     int m=t.size();
     unordered_map<char,int>first;
          unordered_map<char,int>second;
          for(auto c:s){
            first[c]++;
          }
          for(auto c:t){
            second[c]++;
          }
          for(int i=0;i<m;i++){
            if(first[t[i]]!=second[t[i]]){
                return t[i];
            }
          }
          return t[n-1];
    }
};