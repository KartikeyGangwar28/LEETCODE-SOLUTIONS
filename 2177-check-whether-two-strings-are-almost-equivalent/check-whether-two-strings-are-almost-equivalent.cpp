class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        int n=word1.size();
        unordered_map<char,int>mp;
        unordered_map<char,int>mpp;
        for(char c:word1)mp[c]++;
        for(char c:word2)mpp[c]++;
        for(int i=0;i<n;i++){
            char c=word1[i];
            if(abs(mp[c]-mpp[c])>3)return false;
            char x=word2[i];
            if(abs(mp[x]-mpp[x])>3)return false;
        }
        return true;
    }
};