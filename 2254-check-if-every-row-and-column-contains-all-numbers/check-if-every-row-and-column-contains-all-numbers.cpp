class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n=matrix.size();
        //cout<<n;
        for(int i=0;i<n;i++){
              vector<int>v(n,0);
            for(int j=0;j<n;j++){
                v[matrix[i][j]-1]=1;
            }
            if(count(v.begin(),v.end(),0)>=1)return false;
            cout<<i<<"\n";
        }
        for(int i=0;i<n;i++){
         vector<int>v(n,0);
            for(int j=0;j<n;j++){
                v[matrix[j][i]-1]=1;
            }
                        if(count(v.begin(),v.end(),0)>=1)return false;

        }
        return true;
    }
};