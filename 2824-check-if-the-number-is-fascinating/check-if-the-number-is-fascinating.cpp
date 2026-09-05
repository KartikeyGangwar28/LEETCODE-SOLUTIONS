class Solution {
public:
    bool isFascinating(int n) {
        if(n*2>=1000||n*3>=1000)return false;
        int temp=n;
        n*=1000;
         cout<<n<<" ";
        n+=2*temp;
         cout<<n<<" ";
        n*=1000;
         cout<<n<<" ";
        n+=3*temp;
         cout<<n<<" ";
unordered_map<int,int>mp;
while(n!=0){
    int x=n%10;
    if(x==0)return false;
    if(mp[x]==1)return false;
    mp[x]++;
    n=n/10;
}
return true;
    // return sum==45;
    }
};