class Solution {
public:
int length(int n){
if(n<=9)return 1;
int l=0;
while(n!=0){
    n=n/10;
    l++;
}
return l;
}
    int findNumbers(vector<int>& nums) {
        int c=0;
         for(int x:nums){
            if(length(x)%2==0)c++;
         }
         return c;
    }
};