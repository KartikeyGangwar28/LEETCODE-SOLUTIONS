class Solution {
public:
    int singleNonDuplicate(vector<int>& v) {
        int n=v.size();
        if(n==1){
            return v[0];
        }
       int low=1,high=n-2;
       if(v[low-1]!=v[low]){
        return v[low-1];
       }
       if(v[high+1]!=v[high]){
        return v[high+1];
       }
       while(low<=high){
         int mid=low+(high-low)/2;
        if(v[low-1]!=v[low]&&v[low+1]!=v[low]){
            return v[low];
        }
        else if(v[high+1]!=v[high]&&v[high-1]!=v[high]){
            return v[high];
        }
        if(v[mid-1]!=v[mid]&&v[mid+1]!=v[mid]){
            return v[mid];
        }
       else if(v[low+1]==v[low]){
            low+=2;
        }
       else if(v[high]==v[high-1]){
            high-=2;
        }
        else {
            low++;
            high--;
        }
       }
        return v[n/2];
    }
};