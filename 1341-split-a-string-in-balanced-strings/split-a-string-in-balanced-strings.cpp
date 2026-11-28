class Solution {
public:
    int balancedStringSplit(string s) {
        int l=0,r=0,i=0;
        int n=s.size();
        int count=0;
        while(i<n){
            // while(i<n&&(l!=r||l==0)){
            //     if(s[i]=='R')r++;
            //     else l++;
            //     i++;
            // }
            // if(l==r&&l!=0)count++;
            // l=0,r=0;
            if(s[i]=='L')r++;
            else r--;
            if(r==0)count++;
            i++;
        }
        return count;
    }
};