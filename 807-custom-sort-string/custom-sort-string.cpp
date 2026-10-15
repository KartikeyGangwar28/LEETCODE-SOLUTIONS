class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char,int>mp;
        for(char c:s)mp[c]++;
        string ans;
        int n=s.size();
        for(int i=0;i<n;i++){
          if(mp[order[i]]==0)break;
          else{
            while(mp[order[i]]!=0){
           ans+=order[i];
          mp[order[i]]--;
            }
          }
         
        }
        for(auto&it:mp){
            if(it.second!=0){
                while(it.second!=0){
                    ans+=it.first;
                    it.second--;
                }
            };
        }
        return ans;
        
    }
};