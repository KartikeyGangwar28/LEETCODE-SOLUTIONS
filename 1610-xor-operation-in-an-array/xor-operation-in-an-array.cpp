class Solution {
public:
    int xorOperation(int n, int start) {
        int ans=start;
       while(n>1){
         start+=2;
        ans=ans^start;
       
          n--;
       }
        return ans;
        
    }
};