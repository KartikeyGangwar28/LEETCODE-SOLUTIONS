class Solution {
public:
    int compareVersion(string v1, string v2) {
        vector<int>a;
        vector<int>b;
        int n=v1.size();
        for(int i=0;i<n;i++){
            string num="";
            while(i<n&&v1[i]!='.'){
                num+=v1[i];
                i++;
            }
            a.push_back(stoi(num));

        }
        n=v2.size();
        for(int i=0;i<n;i++){
            string num="";
            while(i<n&&v2[i]!='.'){
                num+=v2[i];
                i++;
            }
            b.push_back(stoi(num));

        }
        n=a.size();
        // for(int x:a)cout<<x<<" ";
        // for(int x:b)cout<<x<<" ";
        int x=b.size();
        if(n<x){

        }
        //decoding of numbers in a and b was fine now we just have to compare;
        int i=0,j=0;
        while(i<n&&j<x){
            if(a[i]<b[j])return -1;
            else if(a[i]>b[j])return 1;
            i++;j++;
        }
        while(i<n){
            if(a[i]>=1)return 1;
            i++;
        }
        while(j<x){
            if(b[j]>=1)return -1;
            j++;
        }
        return 0;
    }
};