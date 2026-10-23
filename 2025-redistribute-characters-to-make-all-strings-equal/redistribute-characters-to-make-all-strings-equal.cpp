class Solution {
public:
    bool makeEqual(vector<string>& words) {
        //total characters%n==0 if not then false;if yes then check frequency of each has to be %n==0;
        unordered_map<char,int>mp;
        int count=0;
        int n=words.size();
        for(int i=0;i<n;i++){
            int x=words[i].size();
            for(int j=0;j<x;j++){
                count++;
                mp[words[i][j]]++;
            }
        }
        if(count%n!=0)return false;
        for(auto&it:mp){
            if(it.second%n!=0)return false;
        }
        return true;
    }
};