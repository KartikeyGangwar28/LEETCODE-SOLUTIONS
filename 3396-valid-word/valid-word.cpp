class Solution {
public:
    bool isValid(string word) {
        int n=word.size();
        if(n<3)return false;
        bool vow=false;
        bool con=false;
        string s="aeiou";
        for(char c:word){
            if(!isalpha(c)&&!isdigit(c))return false;
        else if(vow==false||con==false){
                if( isalpha(c)&&s.find(tolower(c))!=string::npos)vow=true;
              if(isalpha(c)&&s.find(tolower(c))==string::npos) con=true;
            }
           // else return true;
        
        }
        if(!vow||!con)return false;
        return true;
    }
};