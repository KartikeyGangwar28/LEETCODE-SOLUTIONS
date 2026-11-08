class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
      int n=grid.size(),m=grid[0].size();
      unordered_map<int,int>store;
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j]==1)store[i]++;
        }
      }
      int ans=0;
      for(int i=0;i<n;i++){
        if(store[i]>1){
        //int count=0;
        for(int j=0;j<m;j++){
            //grid[i][j]=-1;only mark 1 as -1;
            if(grid[i][j]==1)grid[i][j]=-1;
        }
       ans+=store[i];
        }
      }  
      
      for(int j=0;j<m;j++){
        int neg=0;
        int pos=0;
          for(int i=0;i<n;i++){
             if(grid[i][j]==-1){neg++;}
             else if(grid[i][j]==1){pos++;}
}
if(pos>=2)ans+=pos;
else if(neg!=0)ans+=pos;
cout<<neg<<" "<<pos<<" "<<j<<" "<<ans<<"\n";

      }
      return ans;
    }
};