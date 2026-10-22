class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string,string>mp;
        int n=knowledge.size();
        for(int i=0;i<n;i++){
            mp[knowledge[i][0]]=knowledge[i][1];
        }
        n=s.size();
        string ans="";
        for(int i=0;i<n;i++){
             if(s[i]=='('){
                string word="";
                i++;
                while(s[i]!=')'){
                    word+=s[i];
                    i++;
                }
               if(mp[word]!="")ans+=mp[word];
               else ans+="?";
             }
             else ans+=s[i];
            // cout<<"check";
        }
        return ans; 
       
    }
};