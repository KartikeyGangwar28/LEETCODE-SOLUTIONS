class Solution {
public:
    string truncateSentence(string s, int k) {
        int spaces=0;
        int n=s.size();
        int i=0;
        for(i=0;i<n;i++){
            if(isspace(s[i])){
                   spaces++;
            }
            if(spaces==k){
                break;
            }
        }
       string ans;
       for(int j=0;j<i;j++){
        ans+=s[j];
       }
       return ans;

    }
};