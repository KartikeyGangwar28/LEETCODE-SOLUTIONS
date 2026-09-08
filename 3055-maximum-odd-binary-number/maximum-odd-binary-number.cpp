class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int n=s.size();
        int ones=0;
        for(char c:s){
            if(c=='1')ones++;
        }
        string ans;
       ans.resize(n,'0');
       ans[n-1]='1';
       ones--;
       if(ones==0)return ans;
       cout<<ans;
       int i=0;
       while(ones--){
               ans[i]='1';
               i++; 
       }
       for(int j=i;j<n-1;j++){
                ans[j]='0';
       }
       return ans;
    }
};