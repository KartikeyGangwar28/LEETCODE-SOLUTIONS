class Solution {
public:
    int longestConsecutive(vector<int>& v) {
        int n=v.size();
        sort(v.begin(),v.end());
        if(n==0){
            return 0;
        }
        if(n==1){
            return 1;
        }
        int count=1,m=1;
        for(int i=0;i<n-1;i++){
     if(v[i+1]==v[i]+1){
         
        count++;
        m=max(m,count);
    }
    else if(v[i+1]==v[i]){
            continue;
    }
    else if(v[i+1]>v[i]+1) {
    
        count=1;
    }
}
return m;    }
};