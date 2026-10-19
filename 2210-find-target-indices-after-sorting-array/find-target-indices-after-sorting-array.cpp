class Solution {
public:
// void srt(vector<int>&nums,int low,int high){
//     if(low>=high)return;
//     int start=low,end=high,mid=low+(high-low)/2;
//     int pivot=nums[mid];
//     while(start<=end){
//        while(nums[start]<pivot)start++;
//        while(nums[end]>pivot)end--;
//        if(start<=end){
//         swap(nums[start],nums[end]);
//         start++;
//         end--;
//        }

//     }
//     srt(nums,low,end);
//     srt(nums,start,high);

// }
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int>ans;
        int n=nums.size();
        sort(nums.begin(),nums.end());
         //srt(nums,0,n-1);
        for(int i=0;i<n;i++){
            if(nums[i]==target)ans.push_back(i);
        }
        return ans;
    }
};