class Solution {
public:
    vector<int> numberOfLines(vector<int>& w, string s) {
        int count=0;
        int store=0;
        int n=w.size();
        int x=s.size();
        for(int i=0;i<x;i++){
              if(store+w[s[i]-'a']<=100)store+=w[s[i]-'a'];
              else {
                count++;
                store=0;
                i--;
              }
        }
        return {count+1,store};
    }
};