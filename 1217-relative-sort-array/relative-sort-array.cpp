class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int>ans;
        vector<int>temp;
        unordered_map<int,int>mp;
        unordered_map<int,int>mp2; 
        for(int x:arr1)mp[x]++;
        for(int x:arr2)mp2[x]++;
    
        int n=arr2.size();
        for(int i=0;i<n;i++){
            int frequency=mp[arr2[i]];
            while(frequency--){
                ans.push_back(arr2[i]);
            }
        }
        n=arr1.size();
        for(int i=0;i<n;i++){
            if(mp2[arr1[i]]==0){
                temp.push_back(arr1[i]);    
            }
        }
        sort(temp.begin(),temp.end());
        ans.insert(ans.end(),temp.begin(),temp.end());
        return ans;
    }
};