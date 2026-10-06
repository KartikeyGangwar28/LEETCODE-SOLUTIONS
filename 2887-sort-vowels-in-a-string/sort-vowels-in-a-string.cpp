class Solution {
public:
bool isVowel(char c){
    c=tolower(c);
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')return true;
    return false;
}
    string sortVowels(string s) {
        priority_queue<char,vector<char>,greater<char>>pq;
        for(char c:s){
            if(isVowel(c))pq.push(c);
        }
        int n=s.size();
        for(int i=0;i<n;i++){
            if(isVowel(s[i])){
                s[i]=pq.top();
                pq.pop();
            }
        }
        return s;
    }
};