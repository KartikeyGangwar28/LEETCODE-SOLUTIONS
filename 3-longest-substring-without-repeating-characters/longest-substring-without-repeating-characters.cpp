class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size(),low=0,high=0;
        unordered_map<char,int>mp;
        int count=0,ans=INT_MIN;
        while(high<n){
            while(mp[s[high]]!=0){
                mp[s[low]]--;
                 low++;
                count--;
            }
         if(mp[s[high]]==0){
                mp[s[high]]++;
                high++;
                count++;
            }
            //cout<<ans<<" "<<count<<"\n";
            ans=max(ans,count);
        }  
   return max(0,ans);
    }
};