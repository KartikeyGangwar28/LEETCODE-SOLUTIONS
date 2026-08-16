class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {//assign complete cookies
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int n=g.size();
        int m=s.size();
        if(m==0){
            return 0;
        }
        int i=0,j=0;
        int count=0;
       while(i<n&&j<m){
        if(g[i]>s[j]){
             j++;
        }
        else{
            g[i]-=s[j];
          
            if(g[i]<=0){
            count++;
            }
              i++;
              j++;
        }
       }
       return count;
    }
};