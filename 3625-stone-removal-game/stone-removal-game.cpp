class Solution {
public:
    bool canAliceWin(int n) {
        int choice=10,flag=true;
        while(n-choice>=0){
            if(flag){
                n-=choice;
                flag=false;
            }
            else{
                n-=choice;
                flag=true;
            }
            choice--;
        }
       return !flag;
    }
};