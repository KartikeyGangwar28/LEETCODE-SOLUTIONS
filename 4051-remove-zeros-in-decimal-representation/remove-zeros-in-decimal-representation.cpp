class Solution {
public:
    long long removeZeros(long long n) {
        string s="";
        while(n!=0){
            if(n%10!=0)s+=n%10+'0';
            cout<<s;
            n/=10;
        }
        int x=s.size();
        for(int i=0,j=x-1;i<j;i++,j--){
            swap(s[i],s[j]);
        }
       long long ans=stoll(s);
        return ans;
    }
};