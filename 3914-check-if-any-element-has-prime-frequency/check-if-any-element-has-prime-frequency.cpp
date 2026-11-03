class Solution {
public:
bool check(int x){
    if(x<=1)return false;
    for(int i=2;i*i<=x;i++){
        if(x%i==0)return false;
    }
    return true;
}
    bool checkPrimeFrequency(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int x:nums)mp[x]++;
        for(auto&[key,val]:mp){
            if(check(val))return true;
        }
        return false;
    }
};