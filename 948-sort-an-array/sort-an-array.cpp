class Solution {
public:
// void merge(vector<int>&nums,int low,int mid,int high){
//     int i=low,j=mid+1;
//     vector<int>ans;
//     while(i<=mid&&j<=high){
//         if(nums[i]<=nums[j]){
//             ans.push_back(nums[i]);
//             i++;
//         }
//         else{
//             ans.push_back(nums[j]);
//             j++;
//         }
        
//     }
//     while(i<=mid){
//         ans.push_back(nums[i]);
//         i++;
//     }
//     while(j<=high){
//         ans.push_back(nums[j]);
//         j++;
//     }
//     //int k=0;
//     for(int i=low;i<=high;i++){
//         nums[i]=ans[i-low];
//         //k++;
//     }
// }
// void algo(vector<int>& nums,int low,int high){
//  int mid=(low+high)/2;
//   if(low>=high){
//     return;
//   }
//   algo(nums,low,mid);
//   algo(nums,mid+1,high);
//   merge(nums,low,mid,high);
// }
void algo(vector<int>&nums,int low,int high){
    if(low>=high)return;
    int start=low,end=high,mid=low+(high-low)/2;
    int pivot=nums[mid];
    while(start<=end){
        while(start<high&&nums[start]<pivot){
            start++;
        }
        while(end>low&&nums[end]>pivot){
            end--;
        }
        if(start<=end){
            swap(nums[start],nums[end]);
            start++;
            end--;
        }
    }
    algo(nums,low,end);
    algo(nums,start,high);
}
    vector<int> sortArray(vector<int>& nums) {
        algo(nums,0,nums.size()-1);
        return nums;
    } 
};