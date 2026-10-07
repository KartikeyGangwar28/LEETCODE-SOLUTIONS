class Solution {
public:
// bool isEven(int x){
//     return x%2==0;
// }
 int countPartitions(vector<int>& nums) {
     int n=nums.size();
    // int left=nums[0],right=nums[n-1];
     //int i=1,j=n-2;
    // while(i<=j){
    //        if(!isEven(right)){
    //         right+=nums[j];
    //         j--;
    //        }
    //        else if(!isEven(left)){
    //         left+=nums[i];
    //         i++;
    //        }
    //        else{
    //         left+=nums[i];
    //         i++;
    //         right+=nums[j];
    //         j--;
    //        }
    //        cout<<left<<"\n"<<right<<"\n";
    //  }   
    //  return isEven(left)&&isEven(right);
     
     int right=nums[0];
     int left=0;
     for(int i=n-1;i>=1;i--){
        left+=nums[i];
     }
     int count=0;
     for(int i=1;i<n;i++){
        int diff=abs(right-left);
        cout<<diff<<"\n";
        if(diff%2==0)count++;
        left+=nums[i];
        right-=nums[i];

     }
     return count;
    }
};