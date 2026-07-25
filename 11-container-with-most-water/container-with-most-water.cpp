class Solution {
public:
    int maxArea(vector<int>& v) {
       int n=v.size();
       long long int low=0,high=n-1,ans=0;
       while(low<=high){
        int mini=min(v[low],v[high]);
        long long int area=mini*(high-low);
        ans=max(ans,area);
        if(v[low]<=v[high]){
            low++;
        }
        else{
            high--;
        }
       }
       return ans;
    }
};