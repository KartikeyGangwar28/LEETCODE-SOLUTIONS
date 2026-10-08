class Solution {
public:
    int minimumChairs(string s) {
        int count=0;
        int ans=INT_MIN;
        for(char c:s){
            if(c=='E')count++;
            else count--;
            ans=max(ans,count);
        }
        return ans;
    }
};