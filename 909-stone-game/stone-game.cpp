class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int n=piles.size();
        int alice=0,bob=0;
        for(int i=0,j=n-1;i<j;i++){
            if(piles[i]>piles[j]){
                alice+=piles[i];
                bob+=piles[j];
            }
            else{
                alice+=piles[j];
                bob+=piles[i];
            }
        }
        return alice>bob;
    }
};