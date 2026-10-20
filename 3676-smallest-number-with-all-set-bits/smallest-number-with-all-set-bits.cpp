class Solution {
public:
    int smallestNumber(int n) {
        vector<int>ans(2002,0);
       for(int i=1;i<=2002;i=(i*2)+1)ans[i]++;

    for(int i=n;i<=2002;i++){
        if(ans[i]!=0)return i;
    }
    return -1;
}
};