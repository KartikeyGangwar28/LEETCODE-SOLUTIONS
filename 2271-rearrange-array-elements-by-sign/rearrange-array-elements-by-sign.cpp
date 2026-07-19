class Solution {
public:
    vector<int> rearrangeArray(vector<int>& v) {
        int n=v.size();
        vector<int>ans(n,0);
        int pos=0,neg=1;
        for(int i=0;i<n;i++){
              if(v[i]>=0){
               ans[pos]=v[i];
               pos+=2;
              }
              else{
                ans[neg]=v[i];
                neg+=2;
              }
        }
        return ans;
    }
};