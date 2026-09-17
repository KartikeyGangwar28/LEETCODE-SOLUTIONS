class Solution {
public:
int matches=0;
    int numberOfMatches(int n) {
        while(n!=1){
            if(n%2==0){
                matches+=n/2;
                n=n/2;
            }
            else{
                matches+=(n-1)/2;
                n=((n-1)/2)+1;
            }
        }
        return matches;
    }
};