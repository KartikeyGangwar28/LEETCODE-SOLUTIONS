class Solution {
public:
int reverse(int x){
    if(x<=9)return x;
    int rev=0;
    while(x!=0){
        rev=rev*10+(x%10);
        x/=10;
    }
    return rev;
}
    int countDistinctIntegers(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int>st(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
              int x=reverse(nums[i]);
              st.insert(x);
        }
        return st.size();
    }
};