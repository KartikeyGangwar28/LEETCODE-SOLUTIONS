class Solution {
public:
    int minOperations(vector<int>& nums) {
        int ans=0;
        unordered_map<int,int>mp;for(int x:nums)mp[x]++;
        for(auto&it:mp){
            int x=it.second;
           if(x%3==2){
            ans+=x/3;
            ans+=1;
           }
           else if(x%3==0){
           ans+=x/3;
           }  
           else {
             if(x==4)ans+=2;
             else{
                x-=3;
                ans++;
                while(x>0){
                    if(x%3==0){
                        ans+=x/3;
                        break;
                    }
                    else{
                        x-=2;
                        ans++;
                    }
                }
                
        if(x<0)return -1;
           }
           }
            // if(it.second%2!=0&&it.second%3!=0&&it.second%5!=0)return -1;
            //  if(it.second%3==0)ans+=it.second/3;
            // else if(it.second%5==0){
            //     int x=it.second;
            //     while(x!=0){
            //         if(x%3==0){
            //             ans++;
            //             x-=3;
            //         }
            //         else if(x%2==0){
            //             x-=2;
            //             ans++;
            //         }
            //     }
            // }
            //   else if(it.second%2==0)ans+=it.second/2;
            
        }
        return ans;
    }
};