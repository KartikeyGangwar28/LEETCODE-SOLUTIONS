class Solution {
public:
    string reverseParentheses(string s) {
        stack<char>st;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]!=')'){
                st.push(s[i]);
            }
            else if(isalpha(s[i])){
                  st.push(s[i]);
            }
            else if(s[i]==')'){
             string temp;
                while(st.top()!='('){
                    char word=st.top();
                    temp+=word;
                    st.pop();
                }
                st.pop();
               for(int j=0;j<temp.size();j++){
                st.push(temp[j]);
               }
            }
        }
        string ans;
       while(st.size()!=0){
        ans+=st.top();
        st.pop();
       }
       reverse(ans.begin(),ans.end());
       return ans;
    }
};