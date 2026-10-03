class Solution {
public:
int common(vector<int>&a,vector<int>&b){
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int count=0;
    int n=a.size();
    int i=0,j=0;
    while(i<n&&j<n){
        if(a[i]==b[j]){
            count++;i++;j++;
        }
        else if(a[i]<b[j]) {
               i++;
        }
        else{
            j++;
        }
    }
    return count;
}
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n=A.size();
        vector<int>a;
        vector<int>b;
        vector<int>ans;
        for(int i=0;i<n;i++){
           a.push_back(A[i]);
           b.push_back(B[i]);
           int x=common(a,b);
           ans.push_back(x);
        }
        return ans;
    }
};