class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        if(n<=1){
            return {0};
        }
        vector<int>left;
        left.push_back(0);
        vector<int>right;
        right.push_back(0);
        int sumTill=0,backSum=0;
        for(int i=0,j=n-1;i<n-1,j>0;i++,j--){
            int topush=nums[i]+sumTill;
            sumTill+=nums[i];
            left.push_back(topush);
            int backPush=nums[j]+backSum;
            backSum+=nums[j];
            right.push_back(backPush);
        }
        for(int i=0,j=n-1;i<j;i++,j--){
            swap(right[i],right[j]);
        }
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            ans[i]=abs(left[i]-right[i]);
        }

        return ans;
    }
};