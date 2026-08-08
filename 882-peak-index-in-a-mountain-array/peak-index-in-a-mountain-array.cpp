class Solution {
public:
    int peakIndexInMountainArray(vector<int>& v) {
        int n=v.size();
        int low=0,high=n-1;
        while(low<=high){
            // int mid=low+(high-low)/2;
            // if(v[mid]>v[mid-1]&&v[mid]>v[mid+1]){
            //     return v[mid];
            // }
            // if(v[mid]>v[low]){
            //     low++;
            // }
            // else{
            //     high--;
            // }
            if(v[low]<v[high]){
                low++;
            }
            else{
                high--;
            }
        }
        return low;
    }
};