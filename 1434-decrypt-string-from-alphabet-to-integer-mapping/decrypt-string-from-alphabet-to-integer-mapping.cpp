class Solution {
public:
    string freqAlphabets(string s) {
        // char start='a';
        //  int num=0;
        // map<char,char>mp;
        // while(start<='i'){
        //   mp[start]=num+'0';
        //   start++;num++;
        // }
        // while(start<='z'){
        //     mp[start]=num+'#';
        //     start++;num++;
        // }
        int n=s.size();
        string ans="";
        for(int i=0;i<n;i++){
            if(i+2<n&&s[i+2]=='#'){
                int x=0;
                int f=2;
                while(f--){
                    x=x*10+s[i]-'0';
                    i++;
                }
               // i+=2;
                ans+=x+'a'-1;
            }
            else{
                int x=s[i]-'0';
                ans+=x+'a'-1;
            }
        }
        return ans;
    }
};