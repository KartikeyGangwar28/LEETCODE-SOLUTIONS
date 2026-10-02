class Solution {
public:
    bool reportSpam(vector<string>& message, vector<string>& bannedWords) {
     int count=0;
        int n=bannedWords.size();
     int m=message.size();
    //  if(m<n)return true;
     sort(message.begin(),message.end());
     sort(bannedWords.begin(),bannedWords.end());
     int i=0,j=0;
     while(i<n&&j<m){
         if(bannedWords[i]==message[j]){
            j++;count++;
         }
         else if(message[j]>bannedWords[i]) {
            i++;
         }
         else{
            j++;
         }
         if(count==2)return true;
     }
     return false;   
    }
};