class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
     int max=INT_MIN,count=0;
     unordered_map<int,int>mp;
     for(int x:nums){
        mp[x]++;
     }   
     for(auto&it:mp){
         if(it.second>max){
            max=it.second;
         }
     }
     for(auto&it:mp){
        if(it.second==max){
            count+=it.second;
        }
     }
     return count;
    }
};