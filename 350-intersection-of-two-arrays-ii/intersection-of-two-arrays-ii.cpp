class Solution {
public:
    vector<int> intersect(vector<int>& a, vector<int>& b) {
        // vector<int>result;
        // sort(a.begin(),a.end());
        // sort(b.begin(),b.end());
        // int i=0,j=0;
        // int n=a.size();
        // int m=b.size();
        // while(i<n&&j<m){
        //     if(a[i]==b[j]){
        //         result.push_back(a[i]);
        //         i++;
        //         j++;
        //     }
        //     else if(a[i]>b[j]){
        //         j++;
        //     }
        //     else{
        //         i++;
        //     }
        // }
        // return result;
        vector<int>mp(1001);
        for(int x:a)mp[x]++;
        int n=b.size();
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(mp[b[i]]!=0){ans.push_back(b[i]);mp[b[i]]--;}
        }
        return ans;
    }
};