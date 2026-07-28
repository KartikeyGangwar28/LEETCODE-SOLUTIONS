class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n=arr.size();
        int req=n/4;
       unordered_map<int,int>m;
       for(int i=0;i<n;i++){
        m[arr[i]]++;
       }
       for(auto&it:m){
        if(it.second>req){
            return it.first;
        }
       }
       return n;
    }
};