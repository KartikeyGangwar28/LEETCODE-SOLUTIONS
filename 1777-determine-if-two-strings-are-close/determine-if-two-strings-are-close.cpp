class Solution {
public:
    bool closeStrings(string a, string b) {
     int n=a.size(),m=b.size();   
     if(n!=m)return false;
     unordered_map<char,int>mp;
     for(char c:a)mp[c]++;
      priority_queue<int>st;
      for(auto&it:mp)st.push(it.second);
     for(char c:b){
        if(mp.count(c)==0)return false;
     }
    
    
     mp.clear();
     for(char c:b)mp[c]++;
      priority_queue<int>st2;
     for(auto&it:mp)st2.push(it.second);
     for(char c:a){
        if(mp.count(c)==0)return false;
     }cout<<"cehck ";
    if(st.size()!=st2.size())return false;

while(!st.empty()&&!st2.empty()){
    if(st.top()!=st2.top())return false;
    st.pop();st2.pop();
   
}
     return true;
    }
};