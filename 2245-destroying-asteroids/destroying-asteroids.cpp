class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
priority_queue<int, vector<int>, greater<int>> pq;
long long int ms=mass;
        for(int x:asteroids)pq.push(x);
        while(!pq.empty()){
            int x=pq.top();
            pq.pop();
            if(x>ms){
                 return false;
            }
            else ms+=x;
        }
        return true;
    }
};