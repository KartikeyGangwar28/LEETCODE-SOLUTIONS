class Solution {
public:
    int numDifferentIntegers(string word) {
        unordered_map<string,int>mp;
        int n=word.size();
       int count=0;
       bool flag=true;
       for(int i=0;i<n;i++){
        if(isdigit(word[i])){
            if(word[i]=='0'){
                if(i<n-1&&!isdigit(word[i+1]))flag=false;
                else if(i==n-1)flag=false;
            }
            else{ string temp="";
               //unsigned long long int num=0;
               while(isdigit(word[i])){
               temp+=word[i];
             //  num=num*10+(word[i]-'0');
               i++;
               }
              if(mp[temp]==0){
                mp[temp]++;
                count++;
              }
            }
        }
       }
       if(flag) return count;
       return count+1;
    }
};