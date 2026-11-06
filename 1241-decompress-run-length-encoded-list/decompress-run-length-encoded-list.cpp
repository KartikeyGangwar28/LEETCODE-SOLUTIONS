class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();
        for(int i=0;i<=n-2;i+=2){
               int f=nums[i],num=nums[i+1];
               while(f--)ans.push_back(num);
        }
        return ans;
    }
};