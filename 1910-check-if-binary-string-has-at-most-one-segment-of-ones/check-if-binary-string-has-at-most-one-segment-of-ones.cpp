class Solution {
public:
    bool checkOnesSegment(string s) {
        int n=s.size();
        if(n<=2)return true;
        int i=0;
      for(i=0;i<n;i++){
        if(s[i]=='1')continue;
        else break;
      }
      if(i==n-1)return true;
      else {
        for(int j=i;j<n;j++){
            if(s[j]=='1')return false;
        }
      }
        return true;
    }
};