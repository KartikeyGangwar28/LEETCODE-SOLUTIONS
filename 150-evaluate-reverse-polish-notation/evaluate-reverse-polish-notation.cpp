class Solution {
public:
    int evalRPN(vector<string>& s) {
        stack<int>st;
        int n=s.size();
        for(int i=0;i<n;i++){
            if((s[i]!="/")&&(s[i]!="+")&&(s[i]!="-")&&(s[i]!="*")){
                int x=stoi(s[i]);
                st.push(x);
            }
            else{
                int r=st.top();
                st.pop();
                int l=st.top();
                st.pop();
                if(s[i]=="+")st.push(l+r);
                else if(s[i]=="-")st.push(l-r);
               else if(s[i]=="*")st.push(l*r);
               else if(s[i]=="/")st.push(l/r);

            }
        }
        return st.top();
    }
};