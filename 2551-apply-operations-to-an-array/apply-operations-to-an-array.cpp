class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
                nums[i]*=2;
                nums[i+1]=0;
            }
        }
        //we have to shift zero to end();
        int first=0;
        for(int x:nums){
            if(x==0){
                break;
            }
            first++;
        }
        int i=first,j=first+1;
        while(i<n&&j<n){
         if(nums[i]==0&&nums[j]!=0){
            swap(nums[i],nums[j]);
            i++;j++;
        }
        else if(nums[i]==0&&nums[j]==0){
            j++;
        }
       }
        return nums; 
        
    }
};