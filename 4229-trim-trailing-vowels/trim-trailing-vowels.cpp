class Solution {
public:
bool isVowel(char c){
    return true;
    return false;
}
    string trimTrailingVowels(string s) {
        string ans;
       int n=s.size();
       int i=n-1;
       for(i=n-1;i>=0;i--){
        char c=s[i];
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')continue;
        else break;
       }
       for(int j=0;j<=i;j++){
        ans+=s[j];
       }
       return ans;
    }
};