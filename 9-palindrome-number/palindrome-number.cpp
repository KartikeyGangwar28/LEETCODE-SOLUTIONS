class Solution {
public:
// long long int rev(int x){
//     long long int rev=0;
//     while(x!=0){
//         rev=rev*10+(x%10);
//         x/=10;
//     }
//     return rev;
// }
    bool isPalindrome(int x) {
        if(x<0)return false;
        if(x<10)return true;
        string s=to_string(x);
        string rev="";
        int n=s.size();
        for(int i=n-1;i>=0;i--)rev+=s[i];
        return rev==s;
    }
};