class Solution {
public:
    int getLeastFrequentDigit(int n) {
        map<int,int>mpp;
        int ans=INT_MAX;
        while(n!=0){
            mpp[n%10]++;
            n/=10;
        }
        int least=INT_MAX;
        for(auto&it:mpp){
             least=min(least,it.second);
        }
        for(auto&it:mpp){
            if(it.second==least){
                ans=min(ans,it.first);
               return ans;
               }
        }
        return ans;
    }
};