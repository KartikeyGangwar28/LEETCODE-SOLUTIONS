class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
priority_queue<int, vector<int>, greater<int>> pq;
//multiset<int>ms(asteroids.begin(),asteroids.end()); time limit exceeded
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
// for (auto it = ms.begin(); it != ms.end();it++) {
//     if(*it>m)return false;
//     else m+=*it;
//     cout<<*it<<" "<<m<<"\n";
// }
        return true;
    }
};