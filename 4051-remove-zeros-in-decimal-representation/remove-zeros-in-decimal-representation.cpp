class Solution {
public:
long long int reverse(long long int x){
    if(x<=9)return x;
    long long int rev=0;
    while(x!=0){
        rev=rev*10+x%10;
        x/=10;
    }
    return rev;
}
    long long removeZeros(long long n) {
    //     string s=to_string(n);
    //      string ans="";
    //      int x=s.size();
    //     for(int i=0;i<x;i++){
    //           if(s[i]!='0')ans+=s[i];
    //     }
    //     cout<<s;
    //    long long an=stoll(ans);
    //     return an;
    long long int ans=0;
    while(n!=0){
       long long int x=n%10;
        if(x!=0)ans=ans*10+x;
        n/=10;

    }
    return reverse(ans);

    }
};