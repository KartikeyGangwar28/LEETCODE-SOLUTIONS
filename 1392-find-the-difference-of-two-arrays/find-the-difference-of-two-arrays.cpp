class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
       vector<vector<int>>ans;
       unordered_map<int,int>a;
              unordered_map<int,int>b;
              for(int x:nums1)a[x]++;
              for(int x:nums2)b[x]++;
              vector<int>temp;
              for(int x:nums1){
                if(b[x]==0){
                    temp.push_back(x);
                    b[x]++;
                }
              }
              ans.push_back({temp});
              temp.clear();
               for(int x:nums2){
                if(a[x]==0){
                    temp.push_back(x);
                    a[x]++;
                }
              }
              ans.push_back({temp});
              return ans;


    }
};
