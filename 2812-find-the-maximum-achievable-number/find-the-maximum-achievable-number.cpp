class Solution {
public:
    int theMaximumAchievableX(int num, int t) {
        int temp=t;
        while(temp--){
            num++;
        }
        return num+t;
    }
};