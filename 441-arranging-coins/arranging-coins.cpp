class Solution {
public:
    int arrangeCoins(int n) {
        int req=1,count=0;
        while(n>=0){
            n-=req;
            if(n<0){
                return count;
            }
            req+=1;
            count++;
        }
        return count;
    }
};