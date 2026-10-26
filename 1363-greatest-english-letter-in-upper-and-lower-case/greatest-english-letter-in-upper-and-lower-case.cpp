class Solution {
public:
    string greatestLetter(string s) {
     unordered_map<char,int>mp;
     for(char c:s){
        if(c>=97)mp[c]=1;
     }
     int n=s.size();
     string ans="";
     for(int i=0;i<n;i++){
        if(s[i]<97&&s[i]>=65){
            if(mp[tolower(s[i])]!=0){
               if(ans=="")ans=s[i];
               else if(s[i]>ans[0])ans[0]=s[i];
            }
        }
     }
     return ans;
       
    }
};