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
                int x=temp.size();
               for(int j=0;j<x;j++){
                st.push(temp[j]);
               }
               
            }
        }
   string ans;
       while(!st.empty()){
        ans+=st.top();
        st.pop();
       }
       int x=ans.size();
       for(int i=0,j=x-1;i<j;i++,j--){
              swap(ans[i],ans[j]);
       }
       return ans;
    }
};