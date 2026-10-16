class Solution {
public:
    bool areNumbersAscending(string s) {
      int n=s.size();
      //vector<int>temp;
      int prev=-1;
      for(int i=0;i<n;i++){
        if(isdigit(s[i])){
            string num="";
            while(i<n&&isdigit(s[i])){
                num+=s[i];
                i++;
            }
            int x=stoi(num);
            if(prev==-1)prev=x;
            else if(prev>=x)return false;
            else prev=x;
        }
      }
      return true;
    }
};