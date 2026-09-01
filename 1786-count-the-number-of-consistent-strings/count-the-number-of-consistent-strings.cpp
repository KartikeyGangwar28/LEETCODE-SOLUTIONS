class Solution {
public:
// bool checkConsistent(string s,string allowed){
// unordered_map<char,int>mp;
// for(char c:allowed)mp[c]++;
// int n=s.size();
// for(int i=0;i<n;i++){
//     if(mp[s[i]]==0){
//         return false;
//     }
//     // mp[s[i]]--;
// }
// return true;
// }
    int countConsistentStrings(string allowed, vector<string>& words) {
        int n=words.size();
       unordered_map<char,int>mp;
        for(char c:allowed)mp[c]++;
        int count=0;
        for(int i=0;i<n;i++){
            bool flag=true;
               for(int j=0;j<words[i].size();j++){
                if(mp[words[i][j]]==0){
                    flag=false;
                    break;
                }
               }
               if(flag)count++;
        }
        return count;
    }
};