class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        if(n<=1)return strs[0];
        string s=strs[0];
        int count=0,ans=INT_MAX;
        for(int i=1;i<n;i++){
            count=0;
            for(int j=0;j<strs[i].size();j++){
                if(strs[i][j]==s[j])count++;
                else break;
            }
            ans=min(ans,count);
        }
    string as;
    for(int i=0;i<ans;i++){
  as.push_back(s[i]);
    }
    return as;

    }
};