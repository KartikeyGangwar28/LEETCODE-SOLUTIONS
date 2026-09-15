class Solution {
public:
    int minimumPushes(string word) {
        int n=word.size();
        if(n<=8)return n;
        vector<int>groups;
        while(n>0){
            if(n>=8){
            groups.push_back(8);
            }
            else if(n<8&&n>0){
                groups.push_back(n);
            } 
            else if(n<0){
                groups.push_back(abs(8-n));
            }
            n-=8;
        }
        for(int x:groups)cout<<x<<" ";
        int ans=0;
        int z=1;
        for(int i=0;i<groups.size();i++){
            ans+=groups[i]*z;
            z++;
        }
    return ans;


        
    }
};