class Solution {
public:
    int minimumDistance(vector<int>& nums) {
       unordered_map<int,vector<int>>mp;
        int i=0;
        for(int x:nums){mp[x].push_back(i);i++;}
        int ans=INT_MAX;
        for(auto&[x,v]:mp){
            if(v.size()>=3){
                //cout<<"e";
                int x=v.size();
                for(int i=0;i<x-2;i++){
                    int a=v[i+1]-v[i];
                    int b=v[i+2]-v[i];
                    int c=v[i+2]-v[i+1];
                    //cout<<a<<" "<<b<<" "<<c;
                  // int z=a+b+c;
                    ans=min(ans,a+b+c);
                }
            }
        }
        if(ans==INT_MAX)return -1;
        return ans;
    }
};
// int ans=INT_MAX;
//         for(int i=0;i<n;i++){
//             for(int j=i+1;j<n;j++){
//                 int sum=0;
//                 for(int k=j+1;k<n;k++){
//                      if((nums[i]==nums[j])&&(nums[j]==nums[k])){
//                      sum=abs(i-j)+abs(j-k)+abs(k-i); 
//                      ans=min(ans,sum);
//                      }
//                 }
               
//             }
        // }
        // if(ans==INT_MAX)return -1;
        // return ans;
    //    