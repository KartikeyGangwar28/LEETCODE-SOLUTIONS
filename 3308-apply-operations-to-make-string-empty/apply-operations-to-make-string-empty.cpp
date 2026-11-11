class Solution {
public:
    string lastNonEmptyString(string s) {
        unordered_map<char,int>mp;
        for(char c:s)mp[c]++;
        int mx=INT_MIN;
        for(auto&it:mp){
            mx=max(mx,it.second);
        }
  string ans="";
        int n=s.size();
        for(int i=n-1;i>=0;i--){
            if(mp[s[i]]==mx){
                mp[s[i]]=0;
                ans+=s[i];
            }
        }
  reverse(ans.begin(),ans.end());
        return ans;
    }
};
  //     for(char c:s)mp[c]++;
    //     bool flag=false;
    // string ans=s;
    //         int n=s.size();
    //     while(!flag){
    //         //bool tep=true;
    //         string temp="";
    //         vector<int>black(257,0);
    //          for(int i=0;i<s.size();i++){
    //             if(mp[s[i]]>0&&black[s[i]]==0){
    //                 mp[s[i]]--;
    //                 black[s[i]]++;
    //                // tep=false;
    //             }
    //             else if(mp[s[i]]>0)temp+=s[i];
    //          }
    //          s=temp;
    //          if(temp!="")ans=temp;
    //          else return ans;
    //          // cout<<temp<<" hehe"<<"\n";
    //            //if(tep)flag=true;
               
    //          }
    //     return ans;
//---------------------------------------------------
// while(s.size()>mp.size()){
        //     string temp="";
        //     vector<int>black(130);
        //     for(char c:s){
        //     if(black[c]==0){
        //         temp+=c;
        //         black[c]++;
        //     }
        //     }
        //     s=temp;

        // }
        // return s;
        