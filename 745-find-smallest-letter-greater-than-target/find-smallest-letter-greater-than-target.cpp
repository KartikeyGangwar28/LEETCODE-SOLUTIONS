class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n=letters.size();
        if(target<letters[0]||target>=letters[n-1]){
            return letters[0];
        }
        int low=0,high=n-1,mid;
        while(low<=high){
            mid=low+(high-low)/2;
            if(letters[mid]==target){
                // if(mid==n-1){
                //     return letters[0];
                // }
                // return letters[mid+1];
                low=mid+1;
            }
            else if(letters[mid]>target){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return letters[low];
    }
};