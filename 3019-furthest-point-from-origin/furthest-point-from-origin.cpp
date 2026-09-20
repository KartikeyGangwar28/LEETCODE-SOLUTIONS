class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
     int dist=0;
    for(char c:moves){
        if(c=='L')dist--;
        else dist++;
    }
    int neg=0;
    for(char c:moves){
        if(c=='R')neg--;
        else neg++;
    }
    return max(dist,neg);
    }
};