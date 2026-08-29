class Solution {
public:
int countWords(string s){
    int words=0;
    int n=s.size();
    for(int i=0;i<n;i++){
       if(isspace(s[i])){
        words++;
       }
    }
    return words+1;
}
    int mostWordsFound(vector<string>& sentences) {
        int n=sentences.size();
        int ans=0;
        for(int i=0;i<n;i++){
            ans=max(ans,countWords(sentences[i]));
        }
        return ans;
    }
};