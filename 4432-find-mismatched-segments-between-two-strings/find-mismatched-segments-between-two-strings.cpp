class Solution {
public:
    vector<vector<string>> findMismatchedSegments(string a, string b) {
     int n=a.size();   
     int i=0;
     vector<vector<string>>ans;
     while(i<n){
        string z="",x="";
        while(i<n&&a[i]!=b[i]){
            z+=a[i];x+=b[i];
            i++;
        }
        i++;
        if(z!=""&&x!="")ans.push_back({z,x});
     }
     return ans;
    }
};