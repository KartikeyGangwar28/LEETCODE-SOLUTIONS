class Solution {
public:
bool ispalindrome(string&s){
 int n=s.size();
 if(n%2!=0)return false;
 int pre=0,post=0;
 for(int i=0,j=n-1;i<j;i++,j--){
   pre+=s[i];
   post+=s[j];
 }
 return pre==post;
}
    int countSymmetricIntegers(int low, int high) {
        int count=0;
    for(int i=low;i<=high;i++){
        cout<<i<<" ";
        string s=to_string(i);
        if(ispalindrome(s))count++;
    }
    return count;
    }
};