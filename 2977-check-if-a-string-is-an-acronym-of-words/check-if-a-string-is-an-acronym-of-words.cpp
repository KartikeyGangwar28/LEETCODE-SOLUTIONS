class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string temp="";
        int n=words.size();
        for(int i=0;i<n;i++){
        temp+=words[i][0];
        }
        
        return s==temp;
    }
};