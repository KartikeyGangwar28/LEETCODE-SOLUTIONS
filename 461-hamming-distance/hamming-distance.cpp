class Solution {
public:
// string convert(int x){
//     string ans="";
//     while(x!=0){
//         int z=x%2;
//         if(z==1)ans+='1';
//         else ans+='0';
//         x/=2;
//     }
//     return ans;
// }

    int hammingDistance(int start, int goal) {
        // string a=convert(start);
        //  string b=convert(goal);
        // int n=a.size();
        // int x=b.size();
        // int i=0,j=0;
        // int count=0;
        // while(i<n&&j<x){
        //       if(a[i]!=b[j])count++;
        //       i++;j++;
        // }
        // while(i<n){
        //    if(a[i]!='0')count++;
        //     i++;
        // }
        // while(j<x){
        //   if(b[j]!='0')count++;
        //     j++;
        // }
        // return count;
         int x=start^goal;
        int count=0;
        while(x!=0){
           // int z=x>>1;
            if((x&1)==1)count++;
            x=x>>1;
        }
        return count;
    }
};