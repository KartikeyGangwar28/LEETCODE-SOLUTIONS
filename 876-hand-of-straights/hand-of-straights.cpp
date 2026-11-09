class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int group) {
        int n=hand.size();
         if(n%group!=0)return false;
      //  sort(hand.begin(),hand.end());
       map<int,int>mp;
        for(int x:hand)mp[x]++;
       int count=0;
      // while(count!=n/group){
        for(auto&[card,freq]:mp){
            if(freq!=0){
                do{
            for(int i=1;i<group;i++){
                if(mp.count(card+i)==0||mp[card+i]<1)return false;
                // cout<<card<<"+"<<i<<" ";
                 mp[card+i]--;
            }
           // cout<<"\n";
            //count++;
            mp[card]--;
                }while(mp[card]!=0);
            }
        }
      // }
        return true;
//         vector<vector<int>>store;
//         n=n/group;
//       while(store.size()!=n){
//         int t=0;
//         vector<int>temp;
//         for(auto&it:mp){
//             if(it.second!=0){
//                 temp.push_back(it.first);
//                 mp[it.first]--;
//             }
//             if(temp.size()==group)break;
//         }
//         store.push_back(temp);
         
//       }
//    n=store.size();
//    int m=store[0].size();
//    for(int i=0;i<n;i++){
//     for(int j=0;j<m-1;j++){
//         //cout<<store[i][j]<<" ";
//        if(store[i][j+1]-store[i][j]!=1)return false;
//     }
//     cout<<"\n";
//    }
//    return true;
        
    }
};