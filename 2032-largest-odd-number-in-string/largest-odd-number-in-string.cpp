class Solution {
public:
bool isOdd(int n){
    return n%2!=0;
}
    string largestOddNumber(string s) {
        string ans="";
        int n=s.size();
        for(int i=n-1;i>=0;i--){
            if(isOdd(s[i]-'0')){
                //cout<<ans;
             ans.insert(ans.end(),s.begin(),s.begin()+i+1);
                return ans;
            }
        }
        return "";
    }
};