class Solution {
public:
int digitsum(int x){
    if(x<10)return x;
    int sum=0;
    while(x!=0){
        sum+=x%10;
        x=x/10;
    }
    return sum;
}
    int countLargestGroup(int n) {
     if(n<10)return n;
     unordered_map<int,int>mp;
     for(int i=0;i<=n;i++){
           mp[digitsum(i)]++;
     }
     int max=INT_MIN;
     int count=0;
     for(auto&it:mp){
         if(it.second>max){
            max=it.second;
         }
         //if(it.second==max)count++;
     }
     for(auto&it:mp){
        if(it.second==max)count++;
     }
return count;
     }
};