class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>ans(2);
        int a=0,b=1;
        int n=numbers.size();
        int low=0,high=n-1;
        while(low<high){
            int sum=numbers[low]+numbers[high];
            if(sum==target){
                ans[0]=low+1;
                ans[1]=high+1;
                return ans;
            }
            else if(sum>target){
                high--;
            }
            else{
                low++;
            }
        }
        return ans;
    }
};