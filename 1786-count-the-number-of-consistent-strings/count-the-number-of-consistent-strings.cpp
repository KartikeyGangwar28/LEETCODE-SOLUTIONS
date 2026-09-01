class Solution {
public:
bool checkConsistent(string s,string allowed){
unordered_map<char,int>mp;
for(char c:allowed)mp[c]++;
int n=s.size();
for(int i=0;i<n;i++){
    if(mp[s[i]]==0){
        return false;
    }
    // mp[s[i]]--;
}
return true;
}
    int countConsistentStrings(string allowed, vector<string>& words) {
        int n=words.size();
        int x=allowed.size();
       sort(allowed.begin(),allowed.end());
        int count=0;
        for(int i=0;i<n;i++){
               if(checkConsistent(words[i],allowed))count+=1;
            
            
        }
        return count;
    }
};