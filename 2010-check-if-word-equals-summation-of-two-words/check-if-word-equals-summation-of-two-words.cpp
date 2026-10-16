class Solution {
public:
    bool isSumEqual(string firstWord, string S, string T) {
        int n=firstWord.size();
        int a=0,b=0,c=0;
        for(int i=0;i<n;i++){
            a=(a*10)+firstWord[i]-'a';
        }
        n=S.size();
        for(int i=0;i<n;i++){
           b=(b*10)+S[i]-'a';
        }
        n=T.size();
        for(int i=0;i<n;i++){
            c=(c*10)+T[i]-'a';
        }
        // for(char c:S)cout<<c<<" ";
        // int a=stoi(firstWord);
        // int b=stoi(S);
        // int c=stoi(T);
        return a+b==c;
    }
};