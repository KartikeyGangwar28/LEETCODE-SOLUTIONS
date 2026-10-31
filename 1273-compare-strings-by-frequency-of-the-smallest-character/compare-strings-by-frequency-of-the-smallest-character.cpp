class Solution {
public:
int find(string s){
    char mn='z';
     int x=s.size();
            for(int j=0;j<x;j++){
                    if(s[j]<mn){
                        mn=s[j];
                    }
            }
            return count(s.begin(),s.end(),mn);
}
    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words) {
        vector<int>st;
        int n=words.size();
        for(int i=0;i<n;i++){
            st.push_back(find(words[i]));
        }
        n=queries.size();
        vector<int>ans;
         for(int i=0;i<n;i++){
            int z=find(queries[i]);
            // cout<<mn;
            int count=0;
            for(int f:st){
                if(f>z)count++;
            }
           ans.push_back(count);
           // cout<<mn<<" ";
         }
         return ans;

    }
};