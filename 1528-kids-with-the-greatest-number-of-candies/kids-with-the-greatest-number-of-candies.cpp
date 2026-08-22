class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extra) {
        vector<bool>ans;
        int mx=*max_element(candies.begin(),candies.end());
        int n=candies.size();
        for(int i=0;i<n;i++){
            if(candies[i]+extra>=mx){
                ans.push_back(true);
            }
            else{
                ans.push_back(false);
            }
        }
        return ans;
    }
};