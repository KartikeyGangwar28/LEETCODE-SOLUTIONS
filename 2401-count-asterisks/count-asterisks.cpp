class Solution {
public:
    int countAsterisks(string s) {
        stack<char>st;
        int count=0;
         int n=s.size();
         int i=0;
         for(i=0;i<n;i++){
            if(s[i]=='*'){
                count++;
            }
            if(s[i]=='|'){
                i+=1;
                while(i<n&&s[i]!='|'){
                    i++;
                }
                break;
            }
         }
         for(int j=i+1;j<n;j++){
            if(s[j]=='*')count++;
          else if(s[j]=='|'){
                  bool flag=false;
                  j++;
               while(j<n&&s[j]!='|'){
                j++;
               }
              //j+=1;
              cout<<j<<" "<<count<<"\n";
          }  
         }
         return count;
        
    }
};