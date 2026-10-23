class Solution {
public:
bool check(unordered_map<char,int>mp){
    for(auto&it:mp){
        if(it.second>1)return false;
    }
    return true;
}
    int countGoodSubstrings(string s) {
        int n=s.size();
        unordered_map<char,int>mp;
         int l=0,r=0,i=0;
         int count=0;
         bool flag=true;
         for(i=0;i<3;i++){
           mp[s[i]]++;
           //if(mp[s[i]]>1)flag=false;
         }
         if(check(mp))count++;
         l=0,r=i;
         
         while(r<n){
              mp[s[l]]--;
              mp[s[r]]++;
              l++;r++;
              if(check(mp))count++;
         }
         return count;
    }
};