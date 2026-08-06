class Solution {
public:
    int smallestNumber(int n, int t) {
        for(int i=n;i<=n*t;i++){
             int temp=i;
             int prod=1;
             while(temp!=0){
                prod=(prod)*(temp%10);
                temp=temp/10;
             }
             if(prod%t==0){
                return i;
             }
        }
        return -1;
    }
};