class Solution {
public:
    string mostCommonWord(string p, vector<string>& banned) {
        int n=p.size();
        unordered_map<string,int>mp;
        unordered_set<string>st(banned.begin(),banned.end());
        // for(char&c:p){
        //    c=tolower(c);
        // }
for(int i=0;i<n;i++){
p[i]=tolower(p[i]);
    if(isspace(p[i]))continue;
    else if(isalpha(p[i])){
        string word="";
        while(i<n&&isalpha(p[i])){
          p[i]=tolower(p[i]);
            word+=p[i];
            i++;
        }
        if(st.find(word)==st.end()){
            mp[word]++;
        }
    }
}    
string ans="";
int mx=0;
for(auto&it:mp){
    cout<<it.second<<" "<<it.first<<"\n";
    if(it.second>mx){
        ans=it.first;
        mx=it.second;
    }
}
return ans;
    }
};