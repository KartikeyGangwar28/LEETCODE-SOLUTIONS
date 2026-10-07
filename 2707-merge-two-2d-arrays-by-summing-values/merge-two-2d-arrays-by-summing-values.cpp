class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        vector<vector<int>>ans;
        int n=nums1.size();
        int m=nums2.size();
        int i=0,j=0;
        while(i<n&&j<m){
          //  for(int j=0;j<2;j++){
          int a=nums1[i][0];
          int b=nums2[j][0];
                if(a==b){
                    int val=nums1[i][1]+nums2[j][1];
                    ans.push_back({nums1[i][0],val});
                    i++;j++;
                }
                else if(a<b){
                    ans.push_back({a,nums1[i][1]});
                    i++;
                }
                else {
                    ans.push_back({b,nums2[j][1]});j++;}
        }
        while(j<m){
           int b=nums2[j][0];
            ans.push_back({b,nums2[j][1]});j++;
        }
        while(i<n){
                      int a=nums1[i][0];
             ans.push_back({a,nums1[i][1]});
                    i++;
        }

        return ans;
    }
};