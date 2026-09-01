class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int count=0;
        int n=costs.size();
        int i=0;
        while(coins>0&&i<n){
             coins-=costs[i];
             if(coins<0){
                return count;
             }
             count++;
             i++;
             if(coins==0){
                return count;
             }
        }
        return count;
    }
};