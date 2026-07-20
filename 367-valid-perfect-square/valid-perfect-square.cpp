class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==0||num==1){
            return true;
        }
       long long int low=2,high=num/2;
        while(low<=high){
            if(low*low==num||high*high==num){
                return true;
            }
            else{
                low++;
                high--;
            }
        }
        return false;
    }
};