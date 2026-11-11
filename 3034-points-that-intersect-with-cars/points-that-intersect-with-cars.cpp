class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        unordered_set<int>st;
        for(auto&x:nums){
int start=x[0];
int end=x[1];
while(start<=end){
    st.insert(start);
    start++;
}

        }
        return st.size();
    }
};