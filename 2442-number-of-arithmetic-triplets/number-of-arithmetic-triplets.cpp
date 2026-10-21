class Solution {
public:
    int arithmeticTriplets(vector<int>& v, int diff) {
        //sorted array hai 
        int n=v.size();
    //     int low=0,high=n-1;
    //     int i=-1,j=-1,k=-1;
    //     while(low<=high){
    //         if(v[high]-v[low]==diff){
    //             j=low;
    //             k=high;
    //             low++;
    //         }
    //        else if(v[high]-v[low]>diff){
    //             high--;
    //         }
    //         else{
    //             low++;
    //         }
    //     }
    //     for(int start=0;start<j;start++){
    //         if(v[j]-v[start]==k){
    //             i=start;
    //             break;
    //         }
    //     }
    //    return {i,j,k};
    int count=0;
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            if(v[j]-v[i]==diff){
            for(int k=j+1;k<n;k++){
                if(v[k]-v[j]==diff){
                    count++;
                }
            }
            }
        }
    }
    return count;
    }
};