class Solution {
public:
int digit(int x){
    if(x<=9)return x;
    int ans=0;
    while(x!=0){
        ans+=x%10;
        x/=10;
    }
    return ans;
}
    int maximumSum(vector<int>& nums) {
         int n=nums.size();
        priority_queue<pair<int,int>>pq;
        for(int i=0;i<n;i++){
            int x=digit(nums[i]);
            pq.push({x,nums[i]});
        }
        bool flag=false;
        int ans=INT_MIN;
        while(!flag){
             int s1=pq.top().first;
             int dig=pq.top().second;
             pq.pop();
            if(pq.size()==0)break;
             int s2=pq.top().first;
             int dig2=pq.top().second;
             if(s1==s2)ans=max(ans,dig+dig2);
               //it is not necessary that max digit sum means max sum of the original digit as well so let's make the digit as keyword instead of digit sum or digit as priority key - this won't work as digit becomes key so their adjacent equlaity of digit sum isn't garrantied either

        }

         
         return max(ans,-1);
    }
};