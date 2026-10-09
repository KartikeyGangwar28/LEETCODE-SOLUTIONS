class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string,int>mp;
        int n=list1.size();
        for(int i=0;i<n;i++){
            string s=list1[i];
            if(mp[s]==0){
                mp[s]=i+1;
            }
        }
        vector<string>ans;
        n=list2.size();
       //int x=-1;
        int mn=INT_MAX;
        for(int i=0;i<n;i++){
            string s=list2[i];
            if(mp[s]!=0){
                cout<<"check\n";
                if(mn>=mp[s]-1+i){
                    mn=mp[s]-1+i;
                    mp[s]=-mn-1;//-10;
                    
                }
                            }
        }
        for(auto&it:mp){
            if(it.second==-mn-1){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};