class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int>mp;
        int n=arr.size();
        for(int i=0;i<n;i++){
            mp[arr[i]]+=1;
        }
       for(int i=0;i<n;i++){
        if(mp[arr[i]]==1){
            if(k==1) return arr[i];
            else k--;
           
        }
       }
       return "";

    }
};