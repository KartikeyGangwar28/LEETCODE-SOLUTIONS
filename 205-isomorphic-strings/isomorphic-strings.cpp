class Solution {
public:
    bool isIsomorphic(string s, string t) {
         int a=s.size();//,b=t.size();
        if(a==1){
            return true;
        }
        //DISTINCT CHARACTERS KI FREQUENCY SAME HONI CHAHIYE THEN TRUE ELSE FALSE;
        // if(a!=b){
        //     return false;
        // }
        // unordered_set<char>a(s.begin(),s.end());
        // unordered_set<char>b(t.begin(),t.end());
        // if(a.size()!=b.size()){
        //     return false;
        // }
       //unordered_map<char,int>
        // return false;
        // unordered_map<char,int>m;
        // unordered_map<char,int>n;
        // for(char &c:s)m[c]++;
        // for(char &c:t)n[c]++;
        // for(int i=0;i<s.size();i++){
        //     if(m[s[i]]!=n[t[i]]){
        //         return false;
        //     }
        // }
        // for(int i=0;i<s.size();i++){
        //     if(s[i]!=t[i]){
        //         continue;
        //     }
        //     else{
        //         return false;
        //     }
        // }
        // return true;
        //TREAT THIS LIKE AN MATHEMATCIAL FUNCTION -ONE KEY FROM A CAN'T BE MAPPED TO MORE THAN 1 ELEMENT FROM B;
        unordered_map<char,char>mp;
        unordered_set<char>st;
        //vector<int>st(257,0);
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        for(int i=0;i<a;i++){
            if(mp[s[i]]!='\0'){
                if(mp[s[i]]!=t[i])return false;
            }
            else {
                if(st.find(t[i])!=st.end())return false;
                //if(st[t[i]]!=0)return false;
                mp[s[i]]=t[i];
                  st.insert(t[i]);
                 //st[t[i]]++;
                }
        }
      return true;
    }
};