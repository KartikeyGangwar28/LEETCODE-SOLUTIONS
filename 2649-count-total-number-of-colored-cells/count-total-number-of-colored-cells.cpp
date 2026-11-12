class Solution {
public:
    long long coloredCells(int n) {
       long long int ans=1;
      long long int x=4;
        while(n!=1){
            n--;
            ans+=x;
            x+=4;
        }
        return ans;
    }
};