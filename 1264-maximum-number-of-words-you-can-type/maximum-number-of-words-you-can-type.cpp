class Solution {
public:
    int canBeTypedWords(string text, string b) {
        //we go into a word if we find a single word that is present in broken letter in that word then no increase in count else count++;
        int n=text.size(),count=0;
        unordered_map<char,int>mp;
        for(char c:b)mp[c]++;
        for(int i=0;i<n;i++){
            int end=i;
            while(end<n&&!isspace(text[end])){
                end++;
            }
            bool flag=true;
           for(int start=i;start<end;start++){
            if(mp[text[start]]!=0){
                flag=false;
                break;
            }
           }
           if(flag)count++;
            i=end;
        }
        return count;
        
    }
};