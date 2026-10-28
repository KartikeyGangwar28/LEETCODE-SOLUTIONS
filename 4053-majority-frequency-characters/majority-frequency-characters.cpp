class Solution {
public:
    string majorityFrequencyGroup(string s) {
        unordered_map<char,int>mp;
              unordered_map<int,int>freq;
        for(char c:s)mp[c]++;
        for(auto&it:mp){
            freq[it.second]++;//can't club this with above loop because frequency ka counter rakh rahe hain and it will change till we reeach the end of loop;
        }
        // for(auto&it:mp)cout<<it.first<<"-"<<it.second<<"\n";
        // for(auto&it:freq)cout<<it.first<<"-"<<it.second<<"\n";
        int maj=0,mx=INT_MIN;
        for(auto&it:freq){
            if(it.second>=mx){
                if(mx==it.second){
                    maj=max(maj,it.first);
                    continue;
                }
               mx=it.second;
                    maj=it.first;
              
            }
        }
        string ans;
       for(char c:s){
        if(mp[c]==maj){
            ans+=c;
            mp[c]--;
        }
       }
        return ans;
        
        // priority_queue<pair<int,char>>pq;
        // for(auto&it:mp){
        //     pq.push({it.second,it.first});
        // }
        // bool flag=true;
        // vector<int>temp;
        // string ans="";
        // while(flag&&!pq.empty()){
        //     int f=pq.top().first;
        //     char c=pq.top().second;
        //     if(temp.size()==0||temp.back()==f){
        //         ans+=c;
        //     }
        //     else{ flag=false;break;}
        //     pq.pop();
        // }
        // return ans;
    }
};