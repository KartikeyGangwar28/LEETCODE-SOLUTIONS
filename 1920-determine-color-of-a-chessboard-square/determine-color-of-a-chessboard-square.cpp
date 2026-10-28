class Solution {
public:
bool even(char x){
    return x%2==0;
}
    bool squareIsWhite(string s) {
        //odd-odd-black,even-odd-white,even-even-black;
if ((even(s[0]) && !even(s[1])) || (!even(s[0]) && even(s[1]))) return true;      
  return false;
    }
};