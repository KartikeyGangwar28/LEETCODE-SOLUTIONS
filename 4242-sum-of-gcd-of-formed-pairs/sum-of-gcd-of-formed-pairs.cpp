class Solution {
public:
    long long gcdSum(vector<int>&nums) {
        int n=nums.size();
        vector<int>p(n);
        int mx=-1;
       for(int i=0;i<n;i++){
        // int mx=*max_element(nums.begin(),nums.begin()+i+1);//max element is exclusive like - [) so remember this
        mx=max(mx,nums[i]); 
         p[i]=gcd(mx,nums[i]);
       }
       sort(p.begin(),p.end());
      long long int sum=0;
       for(int i=0,j=n-1;i<j;i++,j--){
          sum+=gcd(p[i],p[j]);
       }
       return sum;
    }
};