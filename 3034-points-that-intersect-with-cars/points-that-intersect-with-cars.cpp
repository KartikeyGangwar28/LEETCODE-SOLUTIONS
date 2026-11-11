class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
         vector<int>st;
         vector<int>black(101);
        for(auto&x:nums){
int start=x[0];
int end=x[1];
while(start<=end){
   if(black[start]==0){
    black[start]++;
    st.push_back(start);
   }
    start++;
}

        }
        return st.size();
    }
};