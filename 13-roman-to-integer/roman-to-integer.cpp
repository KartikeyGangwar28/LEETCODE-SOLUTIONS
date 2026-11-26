class Solution {
public:
    int romanToInt(string s) {
        int value=0;
        int I=1,V=5,X=10,L=50,C=100,D=500,M=1000;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='I'){
                if(i==n-1){
                    value+=1;
                    break;
                }
                if(s[i+1]=='V'){
                    value+=4;
                    i++;
                }
                else if(s[i+1]=='X'){
                    value+=9;
                    i++;
                }
                else value+=1;
            }
            else if(s[i]=='X'){
                if(i==n-1){
                    value+=10;
                    break;
                }
                if(s[i+1]=='L'){
                    value+=40;
                    i++;
                }
                else if(s[i+1]=='C'){
                    value+=90;
                    i++;
                }
                else value+=10;
            }
            else if(s[i]=='C'){
                if(i==n-1){
                    value+=100;
                    break;
                }
                if(s[i+1]=='D'){
                    value+=400;
                    i++;
                }
                else if(s[i+1]=='M'){
                    value+=900;
                    i++;
                }
                else{
                    value+=100;
                }
            }
            else if(s[i]=='L'){
                value+=L;
            }
            else if(s[i]=='D'){
                value+=D;
            }
            else if(s[i]=='V'){
                value+=V;
            }
            else if(s[i]=='M'){
                value+=M;
            }
        }
    //     stack<char>st;
    //     int n=s.size();
    //     st.push(s[n-1]);
    //     count+=s[n-1]-'0';
    //    for(int i=n-2;i>=0;i--){
    //        if((st.top()=='V'||st.top()=='X')&&s[i]=='I'){
    //         if(s[i]==)
    //         count-=1;
    //        }
    //        else if(st.top()=='L'||st.top()=='C'&&s[i]=='X'){
    //         count-=10;
    //        }
    //        else if(st.top()=='D'||st.top()=='M'&&s[i]=='C'){
    //         count-=100;
    //        }
    //        else{
    //         count+=
    //        }
    //        st.push(s[i]);
      // }
      return value;
    }
};