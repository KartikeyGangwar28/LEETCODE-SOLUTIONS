class Solution {
public:
bool isVowel(char c){
     if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
        return true;
     }
     return false;
}
    int maxFreqSum(string s) {
        int v=0,c=0;
        unordered_map<char,int>vow;
        unordered_map<char,int>cons;
        for(char a:s){
            if(isVowel(a)){
                vow[a]++;
            }
            else{
                cons[a]++;
            }
        }
        for(auto&it:vow){
            if(it.second>v){
                v=it.second;
            }
        }
        for(auto&it:cons){
            if(it.second>c){
                c=it.second;
            }
        }
        return v+c;
    }
};