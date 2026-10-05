class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char,char>mp;
        char start='a';
        for(char c:key){
            if(isspace(c)){
              continue;
            }
          else if(mp[c]=='\0'){
                mp[c]=start;
                if(start=='z'){
                    start='a';
                }
                else{
                    start+=1;
                }
            }
        } 
        string ans;
        int n=message.size();
        for(int i=0;i<n;i++){
            if(isspace(message[i]))ans+=" ";
            else{
                ans+=mp[message[i]];
            }
        }
        return ans;
        
    }
};