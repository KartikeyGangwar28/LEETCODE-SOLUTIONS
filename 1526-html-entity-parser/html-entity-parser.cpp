class Solution {
public:
    string entityParser(string text) {
        unordered_map<string,char>mp;
        mp["&quot;"]='"';
        mp["&apos;"]='\'';
        mp["&amp;"]='&';
        mp["&gt;"]='>';
        mp["&lt;"]='<';
        mp["&frasl;"]='/';
        int n=text.size();
        string ans="";
        for(int i=0;i<n;i++){
            if(text[i]=='&'){
                string temp="";
                temp+=text[i];
                i++;
                while(i<n&&text[i]=='&'){
                    ans+=text[i];
                    i++;
                }
               while(i<n&&(text[i]!=';'&&text[i]!='&')){
                temp+=text[i];
                i++;
               }
        if(text[i]=='&')i--;
            else if(i<n)temp+=text[i];
           
            // else break;
               //i--;
             if(mp.count(temp)!=0)ans+=mp[temp];
             else ans+=temp;

            }
            else ans+=text[i];
        }
        return ans;
        
    }
};