class Solution {
public:
    int countGoodRotations(vector<int>&v) {
       int n=v.size();
        int half=n/2;
        long long int prefix=0,suff=0;
        for(int i=0;i<half;i++)prefix+=v[i];
        for(int i=half;i<n;i++)suff+=v[i];
        int ans=0;
        //if(prefix>suff)ans+=1;
        for(int i=0;i<n;i++){
            if(prefix>suff)ans++;
            int out=v[i];
            int in=v[(i+half)%n];
            prefix=prefix-out+in;
            suff=suff+out-in;
        }
return ans;
    }
};