class Solution {
public:
    int numberOfSpecialChars(string word) {//TRY USING MAP OR UNORDERED SET;
        vector<int>hash(124,-1);
        int count=0;
        int n=word.size();
        for(int i=0;i<n;i++){
            if(hash[word[i]]==-1)hash[word[i]]=1;
           // if(hash[word[i]]==0){count--;hash[word[i]]=-10;}
            if(word[i]>=97){
                int check=word[i]-32;
                if(hash[check]==1){count++;hash[check]=0;hash[word[i]]=0;}
                 if(hash[check]==0){hash[check]=-10;count--;}
            }
            else if(word[i]>=65){
                int check=word[i]+32;
                    if(hash[check]==-1){hash[check]=-10;}
              else if(hash[check]==1){count++;hash[check]=0;hash[word[i]]=0;}
            }
        }
        return max(count,0);
    }
};
// I BASICALLY CHECKED-
// IF THE CHARACTER IS UPPERCASE AND LOWERCASE IS NOT THERE IN HASH ARRAY THEN BLACKLIST THAT CHARACTER BY INDEXING IT TO -10;
// NOW IF THE CHARACT HAS A LOWER CASE PREFERENCE AND STILL HAS A LOWERCASE PREFERENCE AFTERWARDS THEN WE DECREASE THE COUNT AND BLACKLIST THAT CHARACTER AS SIMPLE AS THAT