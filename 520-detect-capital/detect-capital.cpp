class Solution {
public:

    bool detectCapitalUse(string word) {
        int n=word.size();
        if(n==1){
            return true;
        }
        if(n==2){
            if(isupper(word[1])&&!isupper(word[0])){
                return false;
            }
            return true;
        }
        bool flag=true;
        if(isupper(word[n-1])){
            for(int i=0;i<n-1;i++){
                if(!isupper(word[i])){
                    return false;
                }
            }
        }
        if(!isupper(word[n-1])){
        for(int i=1;i<n-1;i++){
            if(isupper(word[i])){
                return false;
            }
        }
        }
        
        return true;
    }
};