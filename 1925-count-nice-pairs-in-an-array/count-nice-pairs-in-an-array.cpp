class Solution {
public:
int z=1000000007;
int rev(int x){
    if(x<=9)return x;
    int ans=0;
    while(x!=0){
        ans=ans*10+x%10;
        x=x/10;
    }
    return ans;
}
    int countNicePairs(vector<int>& nums) {
         int n=nums.size();
         //cout<<n;
       // multiset<int>mp;
       //vector<int>temp(100000);
       // int ans=0;
        // mp.insert(nums[0]-rev(nums[0]));
        //  for(int i=1;i<n;i++){
        //     int x=nums[i]-rev(nums[i]);
        //    // cout<<x<<" ";
        //     if(mp.find(x)!=mp.end()){
        //         ans+=mp.count(x);
        //         mp.insert(x);
        //     }
        //     else mp.insert(x);
        //    // cout<<ans<<" "<<mp.size()<<" "<<mp.count(x)<<"\n";

        //  }
        unordered_map<long long int, long long int>mp;
        for(int x:nums){
            mp[x-rev(x)]++;
        }
        //cout<<mp.size();
        long long int ans=0;
        for(auto&it:mp){
          if(it.second>=2)(ans+=((it.second-1)*(it.second))/2)%z;
        }
        return ans%z;
        ///////////////////////////////////////////
    //   int x=nums[0]-rev(nums[0]);
    //   unordered_map<int,int>temp;
    //     temp[x]+=1;//nums[0]-rev(nums[0]);
    //     for(int i=1;i<n;i++){
    //          x=nums[i]-rev(nums[i]);
    //          if(temp[x]!=0){
    //             ans+=temp[x];
    //             temp[x]++;
    //          }
    //          else{
    //             temp[x]++;
    //          }
    //     }
         
    //      return ans;
    }
};