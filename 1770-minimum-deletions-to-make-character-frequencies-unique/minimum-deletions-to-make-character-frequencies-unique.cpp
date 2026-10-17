class Solution {
public:
    int minDeletions(string s) {
        unordered_map<char,int>mp;
        int count=0;
        for(char c:s)mp[c]++;
        unordered_set<int>st;
        for(auto&it:mp){
            if(st.count(it.second)==0){
                st.insert(it.second);
            }
            else{
                while(st.count(it.second)>0&&it.second>0){
                    it.second--;
                    count++;
                }
                st.insert(it.second);
            }
           // cout<<it.first<<" "<<it.second<<" "<<count<<"\n";
        }
return count;
    }
};