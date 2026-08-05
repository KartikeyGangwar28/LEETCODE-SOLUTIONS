class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        int n=friends.size();
        int m=order.size();
        vector<int>ans(n);
        int l=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
            if(order[i]==friends[j]){
                ans[l]=order[i];
                l++;
                break;
            }
        }
        }
        return ans;
    }
};