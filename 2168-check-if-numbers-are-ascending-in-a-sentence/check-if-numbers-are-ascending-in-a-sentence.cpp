class Solution {
public:
    bool areNumbersAscending(string s) {
      int n=s.size();
      vector<int>temp;
      for(int i=0;i<n;i++){
        if(isdigit(s[i])){
            string num="";
            while(i<n&&isdigit(s[i])){
                num+=s[i];
                i++;
            }
            int x=stoi(num);
            if(temp.size()==0||temp.back()<x){
                temp.push_back(x);
            }
            else return false;
        }
      }
      return true;
    }
};