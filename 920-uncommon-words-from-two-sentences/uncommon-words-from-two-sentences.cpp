class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
       // vector<string>ans;
        int n=s1.size();
        int m=s2.size();
        int i=0,j=0;
        unordered_map<string,int>mp;
        while(i<n){
            string temp="";
            while(i<n&&!isspace(s1[i])){
                 temp+=s1[i];
                 i++;
            }
            i++;
            mp[temp]++;
        }
        while(j<m){
            string temp="";
            while(j<m&&!isspace(s2[j])){
                 temp+=s2[j];
                 j++;
            }
            j++;
            mp[temp]++;
        }
        vector<string>ans;
        for(auto&it:mp){
            if(it.second<=1)ans.push_back(it.first);
        }
        return ans;
    //    // vector<string>ans;
    //     while(i<n&&j<m){
    //         string temp;
    //         string remp;
    //       while(i<n&&!isspace(s1[i])){
    //         temp+=s1[i];
    //         i++;
    //       }
    //       i++;//skip space;
    //        while(j<m&&!isspace(s2[j])){
    //         remp+=s2[j];
    //         j++;
    //       }
    //       j++;//skip space;
    //       if (remp!=temp&&mp[temp]==0&&mp[remp]==0){
    //         ans.push_back(temp);
    //         ans.push_back(remp);
    //       }
    //       mp[remp]++;mp[temp]++;
    //     }
    //    // cout<<"check";
    //     while(i<n){
    //         string temp;
    //         while(i<n&&!isspace(s1[i])){
    //         temp+=s1[i];
    //         i++;
    //       }
    //      if(mp[temp]==0)ans.push_back(temp);
    //      mp[temp]++;
    //     }
    //     while(j<m){
    //         string remp;
    //          while(j<m&&!isspace(s2[j])){
    //         remp+=s2[j];
    //         j++;
    //       }
    //      if(mp[remp]==0)ans.push_back(remp);
    //      mp[remp]++;
    //     }
    //    // cout<<"check";
    //     return ans;
    }
};