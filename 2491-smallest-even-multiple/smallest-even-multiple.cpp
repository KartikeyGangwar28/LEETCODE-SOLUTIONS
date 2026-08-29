class Solution {
public:
bool check(int num,int n){
    return (num%2==0&&num%n==0);
}
int smallestEvenMultiple(int n) {
        for(int i=n;i<=n*10;i++){
            if(check(i,n)){
                return i;
            }
        }
        return n*10;
    }
};