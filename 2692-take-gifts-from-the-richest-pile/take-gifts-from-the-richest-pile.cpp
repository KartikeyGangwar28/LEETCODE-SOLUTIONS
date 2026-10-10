class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        int n=gifts.size();
        priority_queue<int>pq(gifts.begin(),gifts.end());
        while(k--){
            int x=pq.top();
            pq.pop();
            x=floor(sqrt(x));
            pq.push(x);
        }
        long long int ans=0;
        while(!pq.empty()){
            ans+=pq.top();
            pq.pop();
        }
        return ans;
    }
};