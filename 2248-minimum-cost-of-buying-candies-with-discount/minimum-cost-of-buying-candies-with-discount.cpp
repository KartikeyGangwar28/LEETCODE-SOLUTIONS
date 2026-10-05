class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int n=cost.size();
        if(n==1){
            return cost[0];
        }
        if(n==2){
            return {cost[0]+cost[1]};
        }
         sort(cost.begin(),cost.end());
        // priority_queue<int>pq;
        // for(int x:cost)pq.push(x);
        int ans=0;
        // while(!pq.empty()){
        //     ans+=pq.top();
        //     pq.pop();
        //   if(pq.empty())return ans;
        //     ans+=pq.top();
        //     pq.pop();
        //     if(pq.empty())return ans;
        //     pq.pop();
        // }
        for(int i=n-1;i>=0;i-=3){
            if(i!=0)ans+=cost[i]+cost[i-1];
            else ans+=cost[i];
        }
        return ans;

    }
};