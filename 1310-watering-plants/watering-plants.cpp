class Solution {
public:
    int wateringPlants(vector<int>& p, int capacity) {
        int curr=capacity;
        int n=p.size();
        int steps=0;
        for(int i=0;i<n;i++){
           if(curr<p[i]){
            steps+=i;
            curr=capacity;
            steps+=i+1;
            curr-=p[i];
           }
           else if(curr>=p[i]){
            curr-=p[i];
            steps++;
           }
           cout<<steps<<" ";
        }
        return steps;
    }
};