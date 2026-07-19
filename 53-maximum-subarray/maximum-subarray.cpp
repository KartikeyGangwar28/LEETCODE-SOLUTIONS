class Solution {
public:
    int maxSubArray(vector<int>& v) {
        int n=v.size();
        if(n==1){
            return v[0];
        }
        int sum=0,m=INT_MIN;
        for(int i=0;i<n;i++){
            sum+=v[i];
            m=max(sum,m);
            if(sum<0){
                sum=0;
            }
        }
        return m;
    }
};