class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
       int n=nums.size();
       if(n==1&&nums[0]<0){
        return 1;
       } //[-2147483648] for this case;
          unordered_map<int,int>m;
      unsigned long long int max=abs(*max_element(nums.begin(),nums.end()));
          for(int i:nums){
            m[i]++;
          }
          for(long long int i=1;i<=max;i++){
            if(m.find(i)==m.end()){
                return i;
            }
          }
       return max+1;
    }
};