class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        vector<int>mp(101);
        int n=bulbs.size();
        for(int i=0;i<n;i++){
            int x=bulbs[i];
            if(mp[x]%2==0)mp[x]=1;
            else mp[x]=0;
              
        }
        vector<int>ans;
        for(int i=0;i<101;i++){
            if(mp[i]!=0)ans.push_back(i);
        }
        return ans;
    }
};