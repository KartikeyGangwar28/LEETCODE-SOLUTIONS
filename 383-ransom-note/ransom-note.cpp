class Solution {
public:
    bool canConstruct(string r, string magazine) {
        int a=r.size();
        int b=magazine.size();
          unordered_map<char,int>mp;
          for(char c:magazine)mp[c]++;
          for(int i=0;i<a;i++){
            if(mp[r[i]]<=0)return false;
            mp[r[i]]--;
          }
          return true;
    }
};