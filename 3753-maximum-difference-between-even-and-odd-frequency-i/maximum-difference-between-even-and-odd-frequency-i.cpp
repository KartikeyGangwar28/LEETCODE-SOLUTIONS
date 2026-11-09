class Solution {
public:
    int maxDifference(string s) {
        int mxodd=INT_MIN,mxeven=INT_MIN,mnodd=INT_MAX,mneven=INT_MAX;
        unordered_map<char,int>mp;
        for(char c:s)mp[c]++;
        for(auto&it:mp){
            if(it.second%2==0){
                //mxeven=max(mxeven,it.second);
                mneven=min(mneven,it.second);
            }
            else {
                mxodd=max(mxodd,it.second);
               // mnodd=min(mnodd,it.second);
            }
        }
       // if(mxodd==INT_MIN||mneven==INT_MAX)return -1;
        return (mxodd-mneven);
    }
};