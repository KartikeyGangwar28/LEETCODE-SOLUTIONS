class Solution {
public:
    int maxNumberOfBalloons(string text) {
        string word="balloon";
        unordered_map<char,int>need;
        unordered_map<char,int>mp;
         for(char c:text)mp[c]++;
        for(char c:word){
            if(mp[c]==0)return 0;
            need[c]++;
        }
   
    int ans=10000;
    for(char c:word){
        ans=min(ans,(mp[c]/need[c]));
    }
    return ans;
     
    }
};