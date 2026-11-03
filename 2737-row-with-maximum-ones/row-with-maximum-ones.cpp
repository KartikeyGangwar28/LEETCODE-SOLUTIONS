class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& v) {
        vector<int>ans(2);
        int n=v.size();
        int prev=INT_MIN;
         int m=v[0].size();
        for(int i=0;i<n;i++){
            int count=0;
            for(int j=0;j<m;j++){
                if(v[i][j]==1)count++;
            }
        
        if(count>prev){
            ans[0]=i;
            ans[1]=count;
            prev=count;
        }
        }
        return ans;
    }
};