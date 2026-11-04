class Solution {
public:
    int vowelConsonantScore(string s) {
        string vowel="aeiou";
        int v=0,co=0;
        for(char c:s){
            if(vowel.find(c)!=string::npos)v++;
            else if(isalpha(c))co++;
        }
       if(co>0)return floor(v/co);
       return 0;
    }
};