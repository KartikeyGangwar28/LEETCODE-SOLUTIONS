class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& a, vector<vector<int>>& b) {
        int n=a.size();
        int m=b.size();
        map<int,int>mp;
         vector<vector<int>>ans;
        for(int i=0;i<n;i++){
            mp[a[i][0]]+=a[i][1];
        }
        for(int i=0;i<m;i++){
            mp[b[i][0]]+=b[i][1];
        }
        for(auto&[key,weight]:mp){
            ans.push_back({key,weight});
        }
        return ans;
   



        // // int i=0,j=0;
        // // sort(items1.begin(),items1.end());
        // // sort(items2.begin(),items2.end());
        //  vector<vector<int>>ans;
        // // while(i<n&&j<m){
        // //    int k1=items1[i][0];
        // //    int k2=items2[j][0];
        // //    int v1=items1[i][1];
        // //    int v2=items2[j][1];
        // //    if(k1==k2){
        // //     ans.push_back({k1,v1+v2});
        // //     i++;
        // //     j++;
        // //    }
        // //    else if(k1<k2){
        // //     ans.push_back({k1,v1});
        // //     i++;
        // //    }
        // //    else if(k2>k1){
        // //     ans.push_back({k2,v2});
        // //     j++;
        // //    }

        // // }
        // // while(i<n){
        // //      int k1=items1[i][0];
        // //      int v1=items1[i][1];
        // //     ans.push_back({k1,v1});
        // //     i++;
        // // }
        // // while(j<m){
        // //      int k2=items2[j][0];
        // //    int v2=items2[j][1];
        // //     ans.push_back({k2,v2});
        // //     j++;
        // // }
        // // return ans;
        // priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        //         priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>dq;

        // for(int i=0;i<n;i++){
        //     pq.push({a[i][0],a[i][1]});
        // }
        // for(int i=0;i<m;i++){
        //     dq.push({b[i][0],b[i][1]});
        // }
        // while((!pq.empty())&&(!dq.empty())){
        //     int k1=pq.top().first;
        //     int v1=pq.top().second;
        //     pq.pop();
        //     int k2=dq.top().first;
        //     int v2=dq.top().second;
        //     dq.pop();
        //     if(k1==k2){
        //         ans.push_back({k1,v1+v2});
        //     }
        //      else {
        //         int mn=min(k1,k2);
        //         if(mn==k1){
        //            ans.push_back({k1,v1});
        //            ans.push_back({k2,v2});
        //         }
        //         else {
        //           ans.push_back({k2,v2});
        //            ans.push_back({k1,v1});

        //         }
        //      }
            
        // }
        // while(!pq.empty()){
        //      int k1=pq.top().first;
        //     int v1=pq.top().second;
        //     pq.pop();
        //      ans.push_back({k1,v1});

        // }
        // while(!dq.empty()){
        //     int k2=dq.top().first;
        //     int v2=dq.top().second;
        //     dq.pop();
        //    ans.push_back({k2,v2});

        // }
        // return ans;

    }
};