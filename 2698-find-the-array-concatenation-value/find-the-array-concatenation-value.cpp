class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        //concat first and last,add it to num;
        long long int ans=0;
        int n=nums.size();
        int i=0,j=n-1;
        for(i=0,j=n-1;i<j;i++,j--){
            string first=to_string(nums[i]);
            string last=to_string(nums[j]);
            first+=last;
            ans+=stoi(first);
            cout<<first<<" ";
            
        }
        if(i<=j){
          ans+=nums[j];
        }
        return ans;
    }
};