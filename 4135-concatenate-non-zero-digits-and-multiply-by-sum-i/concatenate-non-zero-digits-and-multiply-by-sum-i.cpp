class Solution {
public:
int sum(int x){
    int ans=0;
    while(x!=0){
        ans+=x%10;x/=10;
    }
    return ans;
}
    long long sumAndMultiply(int n) {
        string s=to_string(n);
        int sm=sum(n);
        long long int ans=0;
        n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]!='0'){
                ans=ans*10+(s[i]-'0');
            }
        }
        return ans*sm;
    }
};