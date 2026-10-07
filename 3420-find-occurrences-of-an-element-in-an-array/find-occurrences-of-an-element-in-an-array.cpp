class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        int a=1;
         map<int,int>mp;
        int n=queries.size();
        int m=nums.size();
        int frq=0;
     //   vector<int>v(100000); not optimal;
        for(int i=0;i<m;i++){
            int z=nums[i];
            if(z==x){
                frq++;
               mp[a]=i;
               //v[a]=i;
               a++;
            }
        }
        vector<int>ans;
        //int k=0;
        for(int i=0;i<n;i++){
            int z=queries[i];
            if(z>frq){
                ans.push_back(-1);
            }
            else ans.push_back(mp[z]);
        //  else {
        //   //  ans.push_back(v[z]);
        //    // k++;
        //  }
        }
        return ans;
    }
};