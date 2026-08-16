class Solution {
public:
    bool isValid(string s) {
        int n=s.size();
        if(n<=1){
            return false;
        }
     stack<char>st;
     st.push(s[0]);
    
     for(int i=1;i<n;i++){
        if(!st.empty()&&(s[i]==')'||s[i]=='}'||s[i]==']')){
            if(s[i]-st.top()>2||s[i]-st.top()==0){
                return false;
            }
            else{
                if(s[i]-st.top()<0){
                    st.push(s[i]);
                }
                else{
               st.pop();
                }
            }
        }
        else{
        st.push(s[i]);
        }
     }
    return st.empty();
    }
};