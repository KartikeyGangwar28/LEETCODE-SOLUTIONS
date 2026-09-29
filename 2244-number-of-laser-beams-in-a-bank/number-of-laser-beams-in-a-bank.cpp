class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n=bank.size();
        int m=bank[0].size();
        int i=0;
        int j=0;
        int ans=0,prev=0,curr=0;
        while(j<m){
            if(bank[0][j]=='1')prev++;
            j++;
        }
        cout<<prev;
        for(i=1;i<n;i++){
            curr=0;
            for(j=0;j<m;j++){
                if(bank[i][j]=='1')curr++;
            }
            if(curr==0)continue;
            int toadd=curr*prev;
            cout<<toadd;
            prev=curr;
            ans+=toadd;
        }
        return ans;
    }
};