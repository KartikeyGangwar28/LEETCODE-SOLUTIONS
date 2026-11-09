class Solution {
public:
    int smallestAbsent(vector<int>& nums) {
        int avg=0;
        int n=nums.size();
        int sum=0;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            mp[nums[i]]++;
        }
        avg=sum/n;
        for(int i=(avg+1);i<=200;i++){
            if(mp.count(i)==0&&i>0)return i;
                    }
                    return -1;
    }
};