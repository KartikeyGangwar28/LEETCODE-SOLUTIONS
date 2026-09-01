class Solution {
public:
    string clearDigits(string s) {
        int n=s.size();
        bool flag=false;
       int curr;
        for(int i=0;i<n;i++){
           if(isdigit(s[i])){
            s.erase(s.begin()+i);
            s.erase(s.begin()+i-1);
            i-=2;
           }
            }
            return s;
    }
};