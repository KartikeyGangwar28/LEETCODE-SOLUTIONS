class Solution {
public:
    string replaceWords(vector<string>& d, string s) {
        map<string,int>mp;
        int n=d.size();
        for(int i=0;i<n;i++){
           mp[d[i]]++;
        }
        string ans;
        n=s.size();
        //vector<string>temp;
        for(int i=0;i<n;i++){
           string word="";
           bool flag=false;
           string wd="";
           while(i<n&&!isspace(s[i])){
            word+=s[i];
            if(mp[word]!=0&&flag==false){wd=word;flag=true;}
            i++;
           }
           if(flag)ans+=wd;
           else ans+=word;
           if(i<n-1)ans+=" ";
           //temp.push_back(word);
        }
       // n=temp.size();

        // for(int i=0;i<n;i++){
        //     if(mp[temp[i][0]]!="")temp[i]=mp[temp[i][0]];
        // }
           //     for(auto it:temp)cout<<it<<" ";
     //cout<<temp[0]<<" "<<temp[1];
        // string ans="";
        // n=temp.size();
        // for(int i=0;i<n;i++){
        //     int x=temp[i].size();
        //     for(int j=0;j<x;i++){
        //        // cout<<temp[i][j];
        //         ans+=temp[i][j];
        //     }
        //     if(i!=n-1)ans+=" ";
        // }
  return ans;
    }
};