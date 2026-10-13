class Solution {
public:
    string makeFancyString(string s) {
        string ans="";
        ans+=s[0];
        int n=s.size();
        char prev=s[0];
        int count=1;
        for(int i=1;i<n;i++){
            if(s[i]==prev){
                count++;
                if(count==3){
                    while(i<n&&s[i]==prev){
                        i++;
                    }
                    if(i==n)return ans;
                    ans+=s[i];
                    count=1;
                    prev=s[i];
                }
                else{
                    ans+=s[i];
                   // count++;
                }
            }
            else{
                prev=s[i];
                ans+=s[i];
                count=1;
            }
            
        }
         return ans;

    }
};