class Solution {
public:
bool isVowel(char c){
    c=tolower(c);
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')return true;
    return false;
}
    string sortVowels(string s) {
       priority_queue<char,vector<char>,greater<char>>pq;
       vector<char>v; //can't use this as we have to sort and can't erase as well or maybe we can but string temp can do same index based addition
     // string temp="";
        for(char c:s){
           //if(isVowel(c))pq.push(c);
          // if(isVowel(c))temp+=c;
         if(isVowel(c))v.push_back(c);
        }
       sort(v.begin(),v.end());
       int k=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            // if(isVowel(s[i])){
            //     s[i]=pq.top();
            //     pq.pop();
            // }
            if(isVowel(s[i])){
                s[i]=v[k];k++;}
        }
        return s;
    }
};