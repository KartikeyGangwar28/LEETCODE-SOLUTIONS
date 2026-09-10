class Solution {
public:
    bool checkIfPangram(string s) {
        int n=s.size();
        if(n<25)return false;
        vector<char>hash(123);
         for(char c:s)hash[c]++;
         for(int i=97;i<=122;i++){
            if(hash[i]==0)return false;
         }
         return true;
    }
};