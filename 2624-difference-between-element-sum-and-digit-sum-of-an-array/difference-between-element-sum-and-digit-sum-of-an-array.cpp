class Solution {
public:
int digitsum(int x){
if(x<=9)return x;
int sum=0;
while(x!=0){
    sum+=x%10;
    x/=10;
}
return sum;
}
    int differenceOfSum(vector<int>& nums) {
         int n=nums.size();
         int s=0;
         int p=0;
         for(int x:nums){
            s+=x;
            p+=digitsum(x);
         }
         return abs(s-p);
    }
};