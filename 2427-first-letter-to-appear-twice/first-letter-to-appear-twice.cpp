class Solution {
public:
    char repeatedCharacter(string s) {
       int n=s.size();
       string ans;
       ans.push_back(s[0]);
       for(int i=1;i<n;i++){
          if(ans.find(s[i])!=string::npos){
            return s[i];
          }
          else{
            ans.push_back(s[i]);
          }
       }
       return 'c';
    }
};