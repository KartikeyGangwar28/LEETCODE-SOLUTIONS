class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        // sort(words1.begin(),words1.end());
        // sort(words2.begin(),words2.end());
        int n=words1.size();
        int m=words2.size();
        unordered_map<string,int>a;
        unordered_map<string,int>b;
        for(string s:words1){
            if(a[s]==0)a[s]+=1;
            else if(a[s]==1)a[s]=-1;
           // a[s]+=1;
        }
         for(string s:words2){
            if(b[s]==0)b[s]+=1;
            else if(b[s]==1)b[s]=-1;
            //b[s]+=1;
        }
        //n=min(n,m);
        int count=0;
        for(auto&it:a){
            if(b[it.first]==1&&it.second==1)count++;
        }
    //    int i=0,j=0;
    //    while(i<n&&j<m){
    //     if(words1[i]==words2[j]){
    //         count++;i++;j++;
    //     }
    //     else if(words1[i]<words2[j])i++;
    //     else j++;
    //    }
        return count;
    }
};