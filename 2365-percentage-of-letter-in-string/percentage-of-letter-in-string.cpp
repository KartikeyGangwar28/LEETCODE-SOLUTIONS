class Solution {
public:
    int percentageLetter(string s, char letter) {
        float n=s.size();
        float f=0;
        for(char c:s){
            if(c==letter)f++;
        }
        cout<<f<<" "<<n;
        int ans=floor(f*100/n);
        return ans;
    }
};