class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& nums) {
        int n=names.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[j]>nums[i]){
                    swap(nums[j],nums[i]);
                    swap(names[j],names[i]);
                }
            }
        }
   return names;
    }
};