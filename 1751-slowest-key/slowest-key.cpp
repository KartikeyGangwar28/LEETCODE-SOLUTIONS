class Solution {
public:
    char slowestKey(vector<int>& r, string k) {

    map<char,int>mp;
     int n=r.size();
     for(int i=0;i<n;i++){
      if(i==0)mp[k[i]]=r[i];
      else mp[k[i]]=max(mp[k[i]],(r[i]-r[i-1]));
     }
     int mx=INT_MIN;char ans='A';
     for(auto&it:mp){
        if(it.second>=mx){
              mx=it.second;
              ans=it.first;
         
        }

     }
     return ans;
    }
};