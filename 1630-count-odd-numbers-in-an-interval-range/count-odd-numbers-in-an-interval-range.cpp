class Solution {
public:
bool check(int x){return x%2==0;}
    int countOdds(int low, int high) {
          int n=high-low;
        if(check(low)&&check(high))return (n)/2;
       else if(!check(high)&&!check(low))return ((n+2)/2);
        return (n+1)/2;
        //return -1;
    }
};