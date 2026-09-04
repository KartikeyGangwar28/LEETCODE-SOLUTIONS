class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        int mx=0,mn=0;
        for(int i=0;i<n;i++){
            // if(i==n-1){
            //     cout<<"inloop: "<<mx<<"\n";
            //     if((mx-nums[i])<=k){return i;}
            //     return -1;
            // }
           mx=*max_element(nums.begin(),nums.begin()+i);
           cout<<mx<<"\n";
           mn=*min_element(nums.begin()+i,nums.end());
           cout<<mn<<"\n";
           if((mx-mn)<=k){return i;}
           cout<<"muhehe\n";
        }
        return -1;
    }
};