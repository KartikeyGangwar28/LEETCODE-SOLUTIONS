class Solution {
public:
    int firstUniqChar(string s) {
                int n=s.size();
                string notValid;
          for(int i=0;i<n;i++){
               if(s.find(s[i],i+1)!=string::npos){
                   notValid.push_back(s[i]);

               }
               else if(notValid.find(s[i])==string::npos){return i;
               }
          }
          return -1;
       
    }
};