class Solution {
public:
    long long removeZeros(long long n) {
        string s=to_string(n);
         string ans="";
         int x=s.size();
        for(int i=0;i<x;i++){
              if(s[i]!='0')ans+=s[i];
        }
        cout<<s;
       long long an=stoll(ans);
        return an;
    }
};