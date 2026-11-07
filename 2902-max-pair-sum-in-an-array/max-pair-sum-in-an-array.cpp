class Solution {
public:
int largest(int x){
    if(x<=9)return x;
    int ans=0;
    while(x!=0){
        ans=max(ans,x%10);x/=10;
    }
    return ans;
}
    int maxSum(vector<int>& nums) {
        int n=nums.size();
        vector<int>temp(10);
        unordered_map<int,priority_queue<int>>mp;
        for(int i=0;i<n;i++ ){
            int x=largest(nums[i]);
             mp[x].push(nums[i]);
        }
        int ans=-1;
        for(auto&it:mp){
            if(it.second.size()>=2){
                int a=it.second.top();
               it.second.pop();
                int b=it.second.top();
                it.second.pop();
                ans=max(ans,a+b);
            }
        }
        return ans;
    }
};