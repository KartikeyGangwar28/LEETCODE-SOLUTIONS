class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxes, int truck) {
        priority_queue<pair<int,int>>pq;//unit per box and boxes;
        for(auto&row:boxes){
            pq.push({row[1],row[0]});
        }
        int size=0,ans=0;
        while(!pq.empty()){
            int n=pq.top().first;
            int m=pq.top().second;
            pq.pop();
            if(size+m<=truck){
                size+=m;
                ans+=n*m;
            }
            else{
                while(size+m>truck){
                    m--;
                }
                size+=m;ans+=m*n;
            }
        }
        
          return ans;
    }
};