class Solution {
public:
// bool checkDistinct(string s){
//     int n=s.size();
//     for(int i=0;i<n-1;i++){
//         if(s[i]==s[i+1])return false;
//     }
//     return true;
// }
    string removeDuplicates(string s) {
         int n=s.size();
    //    while(!checkDistinct(s)){
    //        for(int i=0;i<s.size();i++){
    //         if(s[i]==)
    //        }
    //    }
    stack<char>st;
    string ans;
    st.push(s[n-1]);
    if(st.empty())return s;
    for(int i=n-2;i>=0;i--){
        if(!st.empty()&&st.top()==s[i])st.pop();
        else {
            st.push(s[i]);
        }
    }
    while(!st.empty()){
        ans+=st.top();
        st.pop();
    }
//reverse(ans.begin(),ans.end());
        return ans;
       
    }
};