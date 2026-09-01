class Solution {
public:
    bool isBalanced(string num) {
        int odd=0,even=0,n=num.size();
        for(int i=0;i<=n/2;i++){
            if(2*i<n)even+=num[2*i]-'0';
             if(2*i+1<n)odd+=num[(2*i)+1]-'0';
            // cout<<even<<" "<<odd<<"\n";
        }
   
        return even==odd;
    }
};