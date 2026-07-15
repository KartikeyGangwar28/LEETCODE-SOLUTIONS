class Solution {
public:
    int gcdOfOddEvenSums(int n) {
     int o=n*n;
     int e=n*(n+1);
     return gcd(o,e);
    }
};