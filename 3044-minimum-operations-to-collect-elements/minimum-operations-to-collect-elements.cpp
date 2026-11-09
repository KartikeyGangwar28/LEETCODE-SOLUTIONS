class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        // int start=1;
        // int target=(k*(k-1))/2;
       vector<int>st;
       vector<int>black(51);
        int n=nums.size();
        int i=n-1;
        int count=0;
        while(i>=0&&st.size()!=k){
          if(nums[i]<=k&&black[nums[i]]==0){
            st.push_back(nums[i]);
            black[nums[i]]++;
          }
          i--;
          count++;
          //cout<<st.size()<<" "<<count<<" "<<i<<"\n";
          //if(st.size()==k)break;
        }
        if(st.size()==k)return count;
        return -1;
    }
};