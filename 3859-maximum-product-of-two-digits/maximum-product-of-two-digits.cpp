class Solution {
public:
    int maxProduct(int n) {
        vector<int>a;
        while(n!=0){
            a.push_back(n%10);
            n=n/10;
        }
       int k=a.size();
       if(k==2){
        if (a[0]==0||a[1]==0){
            return 0;
        }
       }
        sort(a.begin(),a.end());
       int ans=0;
       for(int l=0,r=1;l<k-1,r<k;l++,r++){
                  int prod=a[l]*a[r];
                  ans=max(ans,prod);
                         }
                         return ans;
    }
};