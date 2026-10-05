class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>temp(arr.begin(),arr.end());
        sort(temp.begin(),temp.end());
        int rank=1;
        unordered_map<int,int>mp;
        for(int x:temp){
            if(mp[x]==0){
              mp[x]=rank;
            rank++;
            }
           
        }
        int n=arr.size();
        for(int i=0;i<n;i++){
            arr[i]=mp[arr[i]];
        }
return arr;

    }
};