class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        int a=trust.size();
        unordered_map<int,int>mp;
        unordered_map<int,int>frq;
      //town judge will never be on trust[i][0];and total people i.e. n = total frequency of town judge at trust[i][1];
      for(int i=0;i<a;i++)mp[trust[i][0]]++;
      int ans=-1;
      for(int i=1;i<=n;i++){
             if(mp.count(i)==0){
                ans=i;
                break;
             }
      }
      if(ans==-1)return ans;
      for(auto r:trust)frq[r[1]]++;
      if(frq[ans]==n-1)return ans;
      return -1;
        
    }
};