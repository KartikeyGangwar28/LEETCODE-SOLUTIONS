class Solution {
public:
bool even(int x){
    return x%2==0;
}
    bool isArraySpecial(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n-1;i++){
              if((even(nums[i])&&even(nums[i+1]))||(!even(nums[i])&&!even(nums[i+1])))return false;
        }
        return true;
    }
};