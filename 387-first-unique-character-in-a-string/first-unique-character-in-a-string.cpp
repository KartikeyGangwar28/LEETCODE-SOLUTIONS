class Solution {
public:
    int firstUniqChar(string s) {
                int n=s.size();
                string notValid;
          for(int i=0;i<n;i++){
               if(s.find(s[i],i+1)!=string::npos){
                   notValid.push_back(s[i]);

               }
               else if(notValid.find(s[i])==string::npos){return i;
               }
          }
          return -1;
        // unordered_map<char,int>m;
        // for(int i=0;i<n;i++){
        //     m[s[i]]++;
        // }
        // char ele='o';
        // for(auto&it:m){
        //     if(ele!='o'){
        //         break;
        //     }
        //                 if(it.second==1){
        //         ele=it.first;
        //         break;
        //     }
        // }

        // for(int i=0;i<n;i++){
        //     if(s[i]==ele){
        //         return i;
        //     }
        // }
        // return -1;

    }
};