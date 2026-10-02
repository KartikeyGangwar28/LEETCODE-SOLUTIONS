class Solution {
public:
    vector<int> intersection(vector<int>& a, vector<int>& b) {
        // sort(a.begin(),a.end());
        // sort(b.begin(),b.end());
        // int n=a.size();
        // int m=b.size();
        // vector<int>ans;
        // int i=0,j=0;
        // while(i<n&&j<m){
        //     if(a[i]<b[j]){
        //         i++;
        //     }
        //     else if(a[i]>b[j]){
        //         j++;
        //     }
        //     else if(a[i]==b[j]){
        //         if(ans.size()==0||ans.back()!=a[i]){
        //         ans.push_back(a[i]);
        //         }
        //         i++;
        //         j++;
        //     }
        // }
        // return ans;
        unordered_map<int,int>mp;
        for(int x:a)mp[x]++;
        int n=b.size();
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(mp[b[i]]!=0){ans.push_back(b[i]);mp[b[i]]=0;}
        }
        return ans;
    }
};