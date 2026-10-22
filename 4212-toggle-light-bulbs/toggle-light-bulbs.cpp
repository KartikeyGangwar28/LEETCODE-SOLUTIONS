class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        map<int,int>mp;
        int n=bulbs.size();
        for(int i=0;i<n;i++){
            int x=bulbs[i];
            if(mp[x]%2==0)mp[x]=1;
            else mp[x]=0;
              
        }
        vector<int>ans;
        for(auto&[it,freq]:mp){
            if(freq!=0)ans.push_back(it);
        }
        return ans;
    }
};