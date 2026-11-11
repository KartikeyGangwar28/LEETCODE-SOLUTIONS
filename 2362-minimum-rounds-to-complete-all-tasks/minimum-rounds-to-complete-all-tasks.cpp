class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
       unordered_map<int,int>mp;
       for(int x:tasks)mp[x]++;
       int ans=0;
      // cout<<mp.size()<<"\n";
       for(auto&it:mp){
        int x=it.second;
        //cout<<x<<" ";
        if(x%3==0){
            ans+=x/3;
           // x=x/3;
        }
        else if(x%3==2){
            ans+=1;
          //  x-=2;
            ans+=x/3;
           // x=x/3;
        } 
        else{
            while(x>0){
            if(x%3==0){
                ans+=x/3;
                x=0;
            }
            else{
                x-=2;
                ans+=1;
            }
            }
        }
        if(x<0)return -1;
       }
       return ans;
       
    }
};