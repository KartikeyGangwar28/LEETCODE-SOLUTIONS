class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        for(int i=0;i<n;i++){
          //  if(isalpha(s[]))
            int start=i;
            while(start<n&&!isspace(s[start])){
                start++;
            }
           for(int x=i,j=start-1;x<j;x++,j--){
            swap(s[x],s[j]);
           }
            i=start;
           
        }
        return s;
    }
};