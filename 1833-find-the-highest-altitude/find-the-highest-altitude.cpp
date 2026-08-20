class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        int start=0;
        int ans=INT_MIN;
        for(int i=0;i<n;i++){
            start+=gain[i];
           ans=max(ans,start);
        }
        if(ans<0){
            return 0;
        }
        return ans;
    }
};