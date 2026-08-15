class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n=nums.size();
        int trace=0;
        bool flag=false;
       for(int i=0;i<n;i++){
        if(flag==false&&nums[i]!=0){
            flag=true;
        }
           trace^=nums[i];
       }
       if(flag==false)return 0;
       if(trace==0)return n-1;
        return n;
    }
};