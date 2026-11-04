class Solution {
public:
    int winningPlayerCount(int x, vector<vector<int>>& pick) {
      unordered_map<int,unordered_map<int,int>>mp;
          int total=0;
          int n=pick.size();
          for(int i=0;i<n;i++){
            mp[pick[i][0]][pick[i][1]]+=1;
          }
          for(auto&[player,score]:mp){
            bool flag=false;
            for(auto&[sc,freq]:score){    
                if(freq>player){
                    flag=true;break;
                    }
            }
            if(flag){
                cout<<player<<"\n";total++;
                }
          }
          return total;
    }
};