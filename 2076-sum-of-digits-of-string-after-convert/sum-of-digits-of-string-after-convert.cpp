class Solution {
public:
string sum(string s){
int n=s.size();
int ans=0;
for(int i=0;i<n;i++){
    ans+=s[i]-'0';
}
return to_string(ans);
}
    int getLucky(string s, int k) {
        int n=s.size();
        string sm;
        for(int i=0;i<n;i++){
            int num=s[i]-'a'+1;
          while(num!=0){
           int z=num%10;
           sm+=z+'0';
           num=num/10;
          }
           
        }
       cout<<sm<<"\n";
        while(k--){
            sm=sum(sm);
        }
        return stoi(sm);

    }
};