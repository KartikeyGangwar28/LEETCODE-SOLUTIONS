class Solution {
public:
bool Even(int n){
    return n%2==0;
}
 int numberOfSteps(int num) {
        int step=0;
        while(num!=0){
            if(Even(num)){
                num/=2;
            }
            else{
                num-=1;
            }
            step++;
        }
        return step;
    }
};