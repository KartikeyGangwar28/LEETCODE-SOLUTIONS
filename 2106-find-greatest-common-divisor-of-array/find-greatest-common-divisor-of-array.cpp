class Solution {
public:
    int findGCD(vector<int>& nums) {
int n=nums.size();
int min=nums[0];
    for(int i=0;i<n;i++){
       if(nums[i]<min){
        min=nums[i];
       }
    }
    if(min==0){
        return 0;
    }
    int max=*max_element(nums.begin(),nums.end());
      return gcd(min,max);
    }
};