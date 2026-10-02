class Solution {
public:
    int firstUniqChar(string s) {
                int n=s.size();
        vector<int>m(257);
        for(char c:s){
            m[c]++;
        }
        for(int i=0;i<n;i++){
            if(m[s[i]]==1){
                return i;
            }
        }
       
       return -1;
    }
};