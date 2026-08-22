class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]%2==0){
                nums[i]=0;
            }
            else{
                nums[i]=1;
            }
        }
      int z=0,o=0;
      for(int i=0;i<n;i++){
        if(nums[i]==0){
            z++;
        }
        else{
            o++;
        }
      }
      int i=0;
      while(z--){
        nums[i]=0;
        i++;
      }
      while(o--){
        nums[i]=1;
        i++;
      }
        return nums;
    }
};