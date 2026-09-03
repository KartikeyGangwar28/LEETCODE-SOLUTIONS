class Solution {
public:
    bool uniformArray(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return true;
        bool allOdd=true,allEven=true;
        int one=0;
        int odd=0,even=0;
        for(int x:nums){
            if(x%2!=0){allEven=false;odd++;}
            if(x%2==0){allOdd=false;even++;}
            //cout<<allEven;
           if(x==1)one++;
        }
       // cout<<odd<<even;
        if(allOdd||allEven){return true;}
        int minEve=INT_MAX,minOdd=INT_MAX;
        for(int x:nums){
            if(x%2==0){
                minEve=min(minEve,x);
            }
            if(x%2!=0){
                minOdd=min(minOdd,x);
            }
        }
        return minEve>minOdd;
     
    }
};