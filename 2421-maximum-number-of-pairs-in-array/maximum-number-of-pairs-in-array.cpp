class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int x:nums)mp[x]++;
        int pairs=0,leftover=0;
        for(auto&it:mp){
         if(it.second>=2){
            while(it.second>=2){
                pairs+=1;
                it.second-=2;
            }
            leftover+=it.second;
         }   
         else{
            leftover+=it.second;
         }
        }
        //leftover=(nums.size())-(pairs*2);
        vector<int>ans={pairs,leftover};
        return ans;
    }
};