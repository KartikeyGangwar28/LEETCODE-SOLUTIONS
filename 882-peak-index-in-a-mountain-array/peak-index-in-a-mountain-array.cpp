class Solution {
public:
    int peakIndexInMountainArray(vector<int>& v) {
        int n=v.size();
        int low=0,high=n-1;
        while(low<=high){
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