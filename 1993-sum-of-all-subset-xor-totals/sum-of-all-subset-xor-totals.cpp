class Solution {
public:
vector<vector<int>>v;
vector<int>temp;
void generate(vector<int>& nums,int i,int n){
    if(i>=n){
        v.push_back({temp});
        return;
    }
    temp.push_back(nums[i]);
    generate(nums,i+1,n);
    temp.pop_back();
    generate(nums,i+1,n);

}
    int subsetXORSum(vector<int>& nums) {
        int n=nums.size();
       generate(nums,0,n);
       int ans=0;
       n=v.size();
       for(int i=0;i<n;i++){
               int sum=0;
               for(int j=0;j<v[i].size();j++){
                sum^=v[i][j];
               }
               ans+=sum;
       }
       return ans;
    }
};