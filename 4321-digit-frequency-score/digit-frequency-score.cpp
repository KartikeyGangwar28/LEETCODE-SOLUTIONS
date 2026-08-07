class Solution {
public:
    int digitFrequencyScore(int n) {
        unordered_map<int,int>m;
        while(n!=0){
            int rem=n%10;
            m[rem]++;
            n=n/10;
        }
        int score=0;
        for(auto&it:m){
            score+=it.first*it.second;
        }
        return score;
    }
};