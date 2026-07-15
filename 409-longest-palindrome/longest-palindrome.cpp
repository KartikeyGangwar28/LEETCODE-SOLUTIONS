class Solution {
public:
    int longestPalindrome(string s) {
        int n=s.size();
        if(n==1){
            return n;
        }
    unordered_map<char,int>m;
    for(int i=0;i<n;i++){
        m[s[i]]++;
    }
    int count=0,f=0;
    for(auto &it:m){
        if(it.second%2 == 0){
            count+=it.second;
        }
        else if(it.second%2!=0){
            count+=it.second-1;
            f++;
        }
    }
    if(f>=1){
        return count+1;
    }
    return count;
    }

};