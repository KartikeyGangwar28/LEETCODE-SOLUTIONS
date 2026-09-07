class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        int n=nums.size();
        unordered_set<double>s;
        sort(nums.begin(),nums.end());
        for(int i=0,j=n-1;i<j;i++,j--){
            double avg=(nums[i]+nums[j])/2.0;
            s.insert(avg);
        }
        return s.size();
    }
};