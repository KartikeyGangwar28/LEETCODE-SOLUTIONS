class Solution {
public:
    void merge(vector<int>& a, int m, vector<int>& b, int n) {
        for(int i=0;i<n;i++){
             a[m]=b[i];
             m++;
        }
        sort(a.begin(),a.end());
    }
};