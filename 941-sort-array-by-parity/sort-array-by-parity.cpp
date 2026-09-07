class Solution {
public:
bool odd(int x){return x%2!=0;}
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n=nums.size();
        int i=0,j=n-1;
        while(i<j){
            if(odd(nums[i])&&!odd(nums[j])){
                swap(nums[i],nums[j]);
                i++;j--;
            }
            else if(odd(nums[i])&&odd(nums[j])){
                j--;
            }
            else {
                i++;
            }
        }
        return nums;
    }
};