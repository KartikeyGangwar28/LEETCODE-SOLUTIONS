class Solution {
public:
    int maxLength(vector<int>& arr) {
        int n=arr.size();
        int ans=0;
        for(int i=0;i<n;i++){
        unsigned long long int prod=1,gd=arr[i], ld=arr[i];
          //' int count=1;
            for(int j=i;j<n;j++){
                //if(i+j+1>=n)break;
                    ld=reduce(arr.begin()+i,arr.begin()+j+1,1,lcm<int,int>);
                   gd=reduce(arr.begin()+i, arr.begin()+j+1,0,gcd<int, int>);
                   prod*=1ll*arr[j];
                   if(prod==gd*ld)ans=max(ans,j-i+1);
                   
               
            }
           // ans=max(ans,count);
        }
        return ans;
    }
};