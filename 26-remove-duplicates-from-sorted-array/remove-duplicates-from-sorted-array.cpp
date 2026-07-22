class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        vector<int>s;
        for(int i=0;i<n;i++){
             if(s.size()==0||s.back()!=nums[i]){
                s.push_back(nums[i]);
             }
        }
        nums=s;
            return s.size();
        }
        
    
};