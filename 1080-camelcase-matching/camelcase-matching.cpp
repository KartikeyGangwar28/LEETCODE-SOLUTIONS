class Solution {
public:
    vector<bool> camelMatch(vector<string>& q, string p) {
        vector<bool>ans;
        int n=q.size();
        for(int i=0;i<n;i++){
            int x=q[i].size();
            string temp="";
            int k=0;
            for(int j=0;j<x;j++){
                  if(q[i][j]==p[k]){temp+=q[i][j];k++;}
                  else if(isupper(q[i][j]))temp+=q[i][j];
            }
            ans.push_back(temp==p);
        }
        return ans;
    }
};