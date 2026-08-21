class Solution {
public:
bool isDivisible(int n){
    return n%3==0;
}
    int minimumOperations(vector<int>& nums) {
      int n=nums.size();
      int count=0;
      for(int i=0;i<n;i++){
        while(!isDivisible(nums[i])){
            if(nums[i]%3==2){
                nums[i]+=1;
            }
            else if(nums[i]%3==1){
                 nums[i]-=1;
            }
            count++;
        }
      }
      return count;
    }
};