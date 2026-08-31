class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size(),ans=0;
        if(n<=1){
            return n;
        }
        for(int i=0;i<n;i++){
            vector<int>hash(256,0);
            int count=0;
            for(int j=i;j<n;j++){
                  if(hash[s[j]]==1)break;
                  hash[s[j]]++;
                  count++;
            }
            ans=max(ans,count);
        }
        return ans;
   
    }
};