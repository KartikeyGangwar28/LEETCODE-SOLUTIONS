class Solution {
public:
    string removeTrailingZeros(string num) {
        int n=num.size();
        int x=n-1;
        while(num[x]=='0'){
            x--;
        }
        int start=0;
        int end=start+x+1;
       return num.substr(start,start+end);
        
    }
};