class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return {0};
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(nums[i]%2==0){
                int count=0;
                for(int j=i+1;j<n;j++){
                      if(nums[j]%2!=0)count++;
                }
                ans.push_back(count);
            }
            else{
                int count=0;
                for(int j=i+1;j<n;j++){
                      if(nums[j]%2==0)count++;
                }
                ans.push_back(count);
            }
        }
        return ans;
        /*
        vector<int>odd,even;
        int n=nums.size();
        if(n==1)return {0};
        int i=0;
        for(int x:nums){
            if(x%2==0)even.push_back(i);
            else odd.push_back(i);
            i++;
        }
        //int 
        vector<int>ans;
        int x=odd.size(),y=even.size();
        int k=0,l=0;
        for(i=0;i<n;i++){
           if(nums[i%2]==0){
            if(odd[k]>i){
                ans.push_back(x);
                k++;
            }
           }
        }
        */
    }
};