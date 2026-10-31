class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<char,int>mp;
        for(char c:word)mp[c]++;
    //   int n=mp.size();
    //   if(n<=8)return n;
    //   return -1;
    // int count=mp.size();
    // int ans=0;
    // for(auto&it:mp){//the problem is map will store in sorted order of character and not frequency;
    //      if(count<=8){
    //         ans+=it.second;
    //         count--;
         
    //     }
    //    else if(count<=16){
    //         ans+=2*it.second;
    //         count--;
    //     }
    //     else if(count<=24){
    //         ans+=3*it.second;
            
    //         count--;
    //     }
    //        else{ 
    //         ans+=4*it.second;
    //         count--;
    //        }
    // }
    priority_queue<int>pq;
     
for(auto&it:mp)pq.push(it.second);

        int ans=0;
        int count=0;
        while(!pq.empty()){//pq.size()<=8){
        if(count>=24){
            ans+=4*pq.top();
            count++;
            pq.pop();
        }
       else if(count>=16){
            ans+=3*pq.top();
            pq.pop();
            count++;
        }
        else if(count>=8){
            ans+=2*pq.top();
            pq.pop();
            count++;
        }
           else{ ans+=pq.top();
            pq.pop();
            count++;
           }
        }
         return ans;
     
    }
};