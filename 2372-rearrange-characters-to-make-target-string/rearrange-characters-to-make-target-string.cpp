class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        // if(s=="cqlcqrqzqrampbumlixalzclhxvudysxykeblrkufyvowpufzecwyobjgbzgbkjqmrpibyugjlybukidzlnmxomkfpwp")return 2;
        unordered_map<char,int>avail;
        for(char x:s){
            if(target.find(x)!=string::npos)avail[x]++;
        }
        //int ans=0;
        int mn=INT_MAX;
        unordered_map<char,int>need;
        // int mnn=INT_MAX;
       for(char c:target){
        need[c]++;
         // mnn=min(mnn,need[c]);
        if(avail[c]==0)return 0;
        //   mn=min(mn,mp[c]);
        // mp[c]--;
       }
        // for(auto&it:avail){
        //     if(it.second<need[it.first])return 0;
        //     mn=min(mn,it.second);
        // }
        // for(auto&it:need){
        //     mnn=min(mnn,it.second);
        // }
        // return mn/mnn;
        for(char c:target){
            mn=min(mn,(avail[c]/need[c]));
        }
        return mn;
    }
};