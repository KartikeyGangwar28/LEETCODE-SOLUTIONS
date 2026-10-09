class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n=score.size();
      priority_queue<pair<int,int>>pq;
      for(int i=0;i<n;i++){
           pq.push({score[i],i});
      }
       vector<string>ans(n);
bool flag=true;
int i=1;
       while(!pq.empty()){
        if(flag){
            flag=false;
            int ind=pq.top().second;
            pq.pop();
            ans[ind]="Gold Medal";
            if(pq.empty())return ans;
            ind=pq.top().second;
            pq.pop();
ans[ind]="Silver Medal";
                        if(pq.empty())return ans;

            ind=pq.top().second;
            pq.pop();
ans[ind]="Bronze Medal";
          if(pq.empty())return ans;
          i=3;

        }
        else{
            int ind=pq.top().second;
            pq.pop();
            ans[ind]=to_string(++i);
        }
       }
    //    int k=n-1;
    //    for(auto&it:mp){
    //     if(n==3){
    //        v[k]="SILVER MEDAL";
    //        v[k]="Bronze Medal";
    //        v[k]="Gold Medak"
    //     }
    //     else{
    //         v[k]=to_string(it.second);
    //     }
    //        k--;
    //        n--;
    //    }
    return ans;
       
    }  
};