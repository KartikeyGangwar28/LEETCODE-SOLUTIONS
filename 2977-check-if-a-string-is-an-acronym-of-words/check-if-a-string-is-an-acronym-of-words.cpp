class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        // string temp="";
        int n=words.size();
        if(n!=s.size())return false;
        for(int i=0;i<n;i++){
        if(s[i]!=words[i][0])return false;
        }
        
        return true;
    }
};