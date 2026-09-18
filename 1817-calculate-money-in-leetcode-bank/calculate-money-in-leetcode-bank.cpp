class Solution {
public:
    int totalMoney(int n) {
        vector<int>deposit={1,2,3,4,5,6,7};
        int ans=0;
       int day=1;
       int start=1;
       int temp=start;
        int i=0;
        while(n--){
            if(day>7){
                day=1;
                start=temp+1;
                temp+=1;
            }
            ans+=start;
            start++;
            day++;
        }
        return ans;
    }
};