class Solution {
public:
bool check(int x){
    if(x%3==0||x%5==0||x%7==0)return true;
    return false;
}
    int sumOfMultiples(int n) {
        int ans=0;
        for(int i=1;i<=n;i++){
            if(check(i))ans+=i;
        }
        return ans;
    }
};