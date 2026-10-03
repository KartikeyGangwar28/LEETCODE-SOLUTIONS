class Solution {
public:
    int numberOfSpecialChars(string word) {
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
                    if(hash[check]==-1){word[i]=-10;hash[check]=-10;}
              else if(hash[check]==1){count++;hash[check]=0;hash[word[i]]=0;}
            }
        }
        return max(count,0);
    }
};