class Solution {
public:
    int findLucky(vector<int>& arr) {
        vector<int>temp(501);
        int mx=INT_MIN;
        for(int x:arr){
            temp[x]++;
            mx=max(mx,x);
        }
        for(int i=mx;i>=1;i--){
            if(temp[i]==i)return temp[i];
        }
        return -1;
    }
};