class Solution {
public:
    int firstMatchingIndex(string s) {
     int n=s.size();
     for(int i=0,j=n-1;i<=j;i++,j--){
        if(s[i]==s[j])return i;
     }   
     return -1;
    }
};