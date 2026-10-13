class Solution {
public:
    int maximumValue(vector<string>& strs) {
        int n=strs.size();
        int ans=0;
        for(int i=0;i<n;i++){
            int x=strs[i].size();
            bool digit=true;
            int mx=0;
            bool alpha=true;
            for(int j=0;j<x;j++){
                 if(!isdigit(strs[i][j])){
                    digit=false;
                    break;
                 }
            }
            if(!digit)ans=max(ans,x);
            else ans=max(ans,stoi(strs[i]));
           
        }
        return ans;
    }
};