class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        vector<int>hash(100000);
        int mx=INT_MIN;
      // int i=0;
        for(int x:nums){
            //int x=nums[i];
          if(x%2==0)hash[x]++;
          mx=max(mx,x);
         // i++;
        } 
        int ans=-1,ind=-1;
        for(int i=0;i<=mx;i++){
            if(hash[i]>ans&&hash[i]!=0){
                ans=hash[i];
                ind=i;
            }
        }
        return ind;
        
    }
};