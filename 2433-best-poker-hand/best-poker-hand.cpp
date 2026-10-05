class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        //  unordered_map<int,string>mp;
        //   int n=ranks.size();
        //   int ans=0;
        //   for(int i=0;i<n;i++){
        //     if(mp[ranks[i]]!=0){

        //     }
        //     mp[ranks[i]]=suits[i];
        //   }
       unordered_set<char>st(suits.begin(),suits.end());
      // st(st.end(),suits.begin(),suits.end());
       if(st.size()==1)return "Flush";
       unordered_map<int,int>mp;
       for(int x:ranks)mp[x]++;
       int mx=1;
       for(auto&it:mp){
        mx=max(mx,it.second);
       }
       if(mx>=3)return "Three of a Kind";
       else if(mx>=2)return "Pair";
       return "High Card";
    }
};