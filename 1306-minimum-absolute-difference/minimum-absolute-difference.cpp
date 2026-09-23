class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>>ans;
        int n=arr.size();
        int mn=INT_MAX;
        sort(arr.begin(),arr.end());
        for(int i=0;i<n-1;i++){
            mn=min(mn,arr[i+1]-arr[i]);
        }
        for(int i=0;i<n-1;i++){
            if(arr[i+1]-arr[i]==mn){
                ans.push_back({arr[i],arr[i+1]});
            }
        }
        return ans;
    }
};