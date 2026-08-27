class Solution {
public:
    int maxScore(vector<int>& card, int k) {
        int front=0,back=0,n=card.size();
        for(int i=0,j=n-1;i<k;i++,j--){
            front+=card[i];
            back+=card[j];
        }
        int ans=max(front,back);
        int i=k-1,j=n-1;
        while(i!=0){
            front-=card[i];
            front+=card[j];
            i--;
            j--;
            ans=max(ans,front);
        }
        return ans;
    }
};