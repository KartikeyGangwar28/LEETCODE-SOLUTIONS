class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        int a=1;
         unordered_map<int,int>mp;
        int n=queries.size();
        int m=nums.size();
        int frq=0;
        //vector<int>v(n+1)
        for(int i=0;i<m;i++){
            int z=nums[i];
            if(z==x){
                frq++;
               mp[a]=i;
               a++;
            }
        }
        vector<int>ans;
        for(int i=0;i<n;i++){
            int z=queries[i];
            if(z>frq){
                ans.push_back(-1);
            }
            else ans.push_back(mp[z]);
        }
        return ans;
    }
};