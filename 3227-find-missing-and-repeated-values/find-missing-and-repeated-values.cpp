class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<int>hash((n*n)+1);
        // int actual=(n*(n+1))/2;
        // int sum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                // sum+=grid[i][j];
                hash[grid[i][j]]++;
            }
        }
        int missing=0,twice=0;
        for(int i=1;i<=n*n;i++){
            if(hash[i]==0){
                missing=i;
            }
            if(hash[i]==2){
                twice=i;
            }
        }
        return {twice,missing};
    }
};