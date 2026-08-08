class Solution {
public:
    int peakIndexInMountainArray(vector<int>& v) {
        int n=v.size();
        int low=0,high=n-1;
        while(low<=high){
            int mid=low+(high-low)/2;
        //     if(mid!=0&&mid!=n-1&&v[mid+1]<v[mid]&&v[mid]>v[mid-1]){
        //         return mid;
        //     }
        //   else
         if(v[mid+1]<v[mid]&&mid!=0){
                high=mid-1;
            }
            else if(v[mid+1]>v[mid]){
                low=mid+1;
            }
        }
        return low;
    }
};