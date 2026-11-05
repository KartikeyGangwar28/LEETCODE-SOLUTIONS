class Solution {
public:
    string sortString(string s) {
        map<char,int>mp;
        for(char c:s)mp[c]++;
        string r;
        int n=s.size();
        while(r.size()!=n){
        for(auto&[c,f]:mp){
           if(f!=0){
            r+=c;
            mp[c]--;
           }
        }
        for(auto it=mp.rbegin();it!=mp.rend();it++){
              if(it->second!=0){
                r+=it->first;
                mp[it->first]--;
              }
        }
        }
        return r;
//         bool rev=false;
//         multiset<char>ms(s.begin(),s.end());
//         while(!ms.empty()){
//             if(rev==false){
//                 rev=true;
//                 result+=*ms.begin();
//                 ms.erase(ms.begin());
//             }
//             else {
//                 rev=false;
//                 result+=*ms.rbegin();
//                 ms.erase(prev(ms.end()));
//             }
//         }
// //         while(!mp.empty()){
// //             if(rev==false){
// //                  rev=true;
// //           for(auto it=mp.begin();it!=mp.end();it++){
// //             result+=it->first;
// //             it->second-=1;
// //           if(it->second==0){
// //             it=mp.erase(it);
// //             }
// //             }
// //             }
// //             else if(!mp.empty()) {
// //                 for(auto it = mp.rbegin(); it != mp.rend(); it++) {
// //                       result+=it->first;
// //                       it->second-=1;
// //                      if(it->second==0){
// //                        auto next = mp.erase(--it.base());
// //                            it = map<char,int>::reverse_iterator(next);
// //                         }
// // }
// //             }
// //         }
//         return result;
        
    }
};