class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& m) {
        vector<vector<int>>ans;
        sort(m.begin(),m.end());
        //multiset<int>st;//unordered set mein duplicates not allowed but unsorted order htoa hai;
        map<int,int>mp;
        int n=m.size();
       // int mx=0;
        for(int i=0;i<n;i++){
            // st.insert(m[i][1]);
            //mx=max(mx,max(m[i][1],m[i][0]));
            mp[m[i][1]]++;
        }
        vector<int>temp;
        vector<int>oneLoss;
        // for(int i=0;i<n;i++){
        //     // if(st.find(m[i][0])==st.end()){temp.push_back(m[i][0]);}
        //     // else if(st.count(m[i][0])==1){oneLoss.push_back(m[i][0]);}
        // }
        vector<int>black(1000000,0);
        for(int i=0;i<n;i++){
            int x=m[i][0];
            if(mp.count(x)==0&&black[x]==0){temp.push_back(x);black[x]+=2;}
          //  if(mp[x]==1&&black[x]==0){oneLoss.push_back(x);black[x]+=2;}
            if(mp[m[i][1]]==1&&black[m[i][1]]==0){oneLoss.push_back(m[i][1]);black[m[i][1]]+=2;}
        }
        //cout<<mp[7]<<" "<<mp[8]<<" "<<black[7]<<" "<<black[8];
        sort(oneLoss.begin(),oneLoss.end());
        ans.push_back(temp);
        ans.push_back(oneLoss);
        return ans;
    }
};