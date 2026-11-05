class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxes, int truck) {
        // priority_queue<pair<int,int>>pq;//unit per box and boxes;
        // for(auto&row:boxes){
        //     pq.push({row[1],row[0]});
        // }
        int size=0,ans=0;
        // while(!pq.empty()){
        //     int n=pq.top().first;
        //     int m=pq.top().second;
        //     pq.pop();
        //     if(size+m<=truck){
        //         size+=m;
        //         ans+=n*m;
        //     }
        //     else{
        //         int remaining=truck-size;
        //         size+=remaining;ans+=remaining*n;
        //         break;
        //     }
        // }
        
        //   return ans;
        sort(boxes.begin(),boxes.end(),[](const vector<int>&a,const vector<int>&b){
            return a[1]>b[1];
        });
        int n=boxes.size();
        for(int i=0;i<n;i++){
                int x=boxes[i][0],y=boxes[i][1];
                if(size+x<=truck){
                    size+=x;
                    ans+=x*y;
                }
                else{
                    int rem=truck-size;
                    ans+=rem*y;
                    break;
                }
        }
        return ans;
    }
};