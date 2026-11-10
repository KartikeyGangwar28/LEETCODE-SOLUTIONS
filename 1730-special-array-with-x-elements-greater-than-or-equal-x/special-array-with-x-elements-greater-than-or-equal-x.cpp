class Solution {
public:
    int specialArray(vector<int>& nums) {
        int n=nums.size();
        bool flag=false;
        int start=1;
        while(start<=n&&!flag){
            int count=0;
            for(int x:nums){
                if(x>=start)count++;
            }
            if(count==start)return start;
            start++;
        }
        return -1;
    }
};