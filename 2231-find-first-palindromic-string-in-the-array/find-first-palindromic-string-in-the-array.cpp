class Solution {
public:
bool ispalindrom(string s){
    int n=s.size();
    for(int i=0,j=n-1;i<j;i++,j--){
        if(s[i]!=s[j]){
            return false;
        }
    }
    return true;
}
    string firstPalindrome(vector<string>& words) {
        int n=words.size();
        for(int i=0;i<n;i++){
          if(ispalindrom(words[i])){
            return words[i];
          };
        }
        return "";
    }
};