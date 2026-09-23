class Solution {
public:
    int pivotInteger(int n) {
        if(n==1)return 1;
        int i=1,j=n;
        int pre=i,suff=n;
        while(i<j){
            if(pre<=suff){
                 i+=1;
                pre+=i;
               
            }
            else{
                j-=1;
                suff+=j;
                 
            }
        }
        // cout<<suff<<" "<<pre<<" "<<i;
        //  suff+=i;
         if(suff==pre)return i;
         return -1;
    }
};