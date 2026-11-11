class Solution {
public:
    int numWaterBottles(int n, int e) {
     int ans=n; 
     while(n>=e){
        ans+=1;
        n=n-e+1;

     } 
     return ans;
    }
};