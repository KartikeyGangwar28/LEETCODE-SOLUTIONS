class Solution {
public:
    bool isBalanced(string num) {
        int odd=0,even=0,n=num.size();
        for(int i=0;i<n;i++){
            if(i%2==0)even+=num[i]-'0';
            else odd+=num[i]-'0';
        }
        cout<<even<<" "<<odd;
        return even==odd;
    }
};