/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
     int n=mountainArr.length();
     int low=0,high=n-1,mid,peak;
     while(low<=high){
        mid=low+(high-low)/2;
        int x=mountainArr.get(mid);
     if(mid!=0&&mid!=n-1&&x>mountainArr.get(mid+1)&&x>mountainArr.get(mid-1)){
           peak=mid;
           break;
        }
        else if(x>mountainArr.get(mid+1)){
            high=mid-1;
        }
        else{
            low=mid+1;
        }

     }
     //searching for left half
     low=0,high=peak;
     while(low<=high){
        mid=low+(high-low)/2;
        int x=mountainArr.get(mid);
        if(x==target){
            return mid;
        }
        else if(x>target){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
     }
     //search in right;
     low=peak,high=n-1;
     while(low<=high){
        mid=low+(high-low)/2;
        int x=mountainArr.get(mid);
        if(x==target){
            return mid;
        }
        else if(x>target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
     }
     return -1;
    }
};