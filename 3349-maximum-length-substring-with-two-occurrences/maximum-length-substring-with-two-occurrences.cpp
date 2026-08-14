class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char,int>m;
        int l=0,r=0;
        int n=s.size();
        if(n<=2){
            return n;
        }
        int ans=INT_MIN;
        int length=0;
        while(r<n){
            if(m[s[r]]<2){
            m[s[r]]++;
            r++;
             length+=1;
             ans=max(ans,length);
            }
            else{
                l+=1;
                r=l;
                m.clear();
                length=0;
            }
        }
        return ans;
    }
};