class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        int n=piles.size();
        int ans=0;
        int low=0,high=n-1;
        while(low<high-1){
            vector<int>v={piles[low],piles[high-1],piles[high]};
            low++;
            high-=2;
            int mx=0,smax=INT_MIN;
            for(int x:v){
                if(x>mx){
                    smax=mx;
                    mx=x;
                }
                else if(x>smax&&x<=mx){
                    smax=x;
                }
            }
            ans+=smax;
        }
        return ans;
    }
};