class Solution {
public:
    int countMatches(vector<vector<string>>& items, string rulekey, string rulevalue) {
         int type=0,color=1,name=2;
         int a,b;
         if(rulekey=="color"){
             a=color;
         }
         else if(rulekey=="type"){
            a=type;
         }
         else{
            a=name;
         }
         int ans=0;
         int n=items.size();
         for(int i=0;i<n;i++){
            if(items[i][a]==rulevalue)ans++;
         }
         return ans;
    }
};