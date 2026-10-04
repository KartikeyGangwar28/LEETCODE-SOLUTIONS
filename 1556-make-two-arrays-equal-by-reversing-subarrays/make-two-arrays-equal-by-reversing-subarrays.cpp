class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        unordered_map<int,int>mp;
        for(int x:target)mp[x]++;
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(mp[arr[i]]==0)return false;
            mp[arr[i]]-=1;
        }
        return true;
    }
};