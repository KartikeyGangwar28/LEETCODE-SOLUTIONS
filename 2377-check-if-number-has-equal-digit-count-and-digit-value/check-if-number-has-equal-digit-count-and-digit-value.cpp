class Solution {
public:
    bool digitCount(string num) {
     unordered_map<char,int>mp;
     for(char c:num)mp[c]++;
     int n=num.size();
     for(int i=0;i<n;i++){
        if(mp[i+'0']!=num[i]-'0')return false;
        cout<<"muhehe"<<"\n";
     }   
     return true;
    }
};