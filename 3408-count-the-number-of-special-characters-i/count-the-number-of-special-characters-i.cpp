class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int>hash(257,-1);
        int count=0;
        int n=word.size();
        for(int i=0;i<n;i++){
            if(hash[word[i]]==-1)hash[word[i]]=1;
           // hash[word[i]]++;
            if(word[i]>=97){
                int check=word[i]-32;
                if(hash[check]==1){count++;hash[check]=0;hash[word[i]]=0;}
            }
            else if(word[i]>=65){
                int check=word[i]+32;
                if(hash[check]==1){count++;hash[check]=0;hash[word[i]]=0;}
            }
        }
        return count;
    }
};