class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
    //  map<int,int>m;
    //  for(int i=0;i<nums.size();i++){
    //     m[nums[i]]++;
    //  }    think of O(n) solution;
     for(int i=0;i<n;i++){
        nums[i]=nums[i]*nums[i];
     }
     sort(nums.begin(),nums.end());
     return nums;

    }
};