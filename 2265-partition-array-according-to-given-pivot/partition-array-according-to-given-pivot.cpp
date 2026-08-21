class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
       int n=nums.size();
        vector<int>ans;
        int count=0;
        for(int i=0;i<n;i++){
            if(nums[i]==pivot){
                count++;
                continue;
            }
           else if(nums[i]<pivot){
                ans.push_back(nums[i]);
            }
        }
        while(count--){
            ans.push_back(pivot);
        }
        for(int i=0;i<n;i++){
            if(nums[i]>pivot){
                ans.push_back(nums[i]);
            }
        }
        return ans;

    }
};