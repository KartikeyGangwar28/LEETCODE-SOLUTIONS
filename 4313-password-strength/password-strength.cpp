class Solution {
public:
    int passwordStrength(string password) {
        unordered_set<char>st;
        int a=1,b=2,x=3,d=5;
        int ans=0;
        for(char c:password){
           if(isalpha(c)){
            if(islower(c)){
                if(st.count(c)==0){
                    ans+=a;
                    st.insert(c);
                }
            }
            else {
                if(st.count(c)==0){
                    ans+=b;
                    st.insert(c);
                }
            }
           }
           else if(isdigit(c)){
            if(st.count(c)==0){
                ans+=x;
                st.insert(c);
            }
           }
           else {
             if(st.count(c)==0){
                ans+=d;
                st.insert(c);
            }
           }
        }
        return ans;
    }
};