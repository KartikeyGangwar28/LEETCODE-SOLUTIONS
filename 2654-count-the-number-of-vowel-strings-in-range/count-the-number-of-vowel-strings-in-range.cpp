class Solution {
public:
 bool isVowel(char s){
    if(s=='a'||s=='e'||s=='i'||s=='o'||s=='u'){
        return true;
    }
    return false;
 }
    int vowelStrings(vector<string>& s, int left, int right) {
        int count=0;
        int n=s.size();
        for(int i=left;i<=right;i++){
            if(isVowel(s[i][0])){
                int x=s[i].size();
                if(isVowel(s[i][x-1]))count++;
            }
        }
        return count;
    }
};