class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size(),ans=0;
        if(n<=1){
            return n;
        }
        int l=0,r=0;
        vector<int>hash(256,0);
        int count=0;
        while(r<n){ 
        ans=max(ans,r-l+1);
        hash[s[r]]++;
           r++;
           while(hash[s[r]]>0){
            hash[s[l]]--;
            l++;
           }
          
           }
        
        return ans;
   
    }
};