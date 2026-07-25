class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
       int n=nums.size();
       if(n==1&&nums[0]<0){
        return 1;
       }
          unordered_map<int,int>m;
        long long int max=abs(*max_element(nums.begin(),nums.end()));
          for(int i=0;i<n;i++){
            m[nums[i]]++;
          }
          for(long long int i=1;i<=max;i++){
            if(m.find(i)==m.end()){
                return i;
            }
          }
       return max+1;
    }
};