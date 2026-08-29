class Solution {
public:
int count2(int n,int digit){
int count=0;
while(n!=0){
    int rem=n%10;
    if(rem==digit)count++;
    n=n/10;

}
return count;
}
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int count=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            count+=count2(nums[i],digit);
        }
        return count;

    }
};