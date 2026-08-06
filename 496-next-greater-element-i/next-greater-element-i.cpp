class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
     vector<int>ans(n);
     for(int i=0;i<n;i++){
        int present=nums1[i];
        int k=0;
        while(nums2[k]!=present){
            k++;
        }
        if(k>=m){
            ans[i]=-1;
        }
        else{
 for(int j=k+1;j<m;j++){
            if(nums2[j]>present){
                ans[i]=nums2[j];
                break;
            }
            else{
                ans[i]=-1;
            }
        }
        }

     }
  for(int i=0;i<n;i++){
    if(ans[i]==0){
        ans[i]=-1;
    }
  }
     return ans;
    }

};