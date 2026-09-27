class Solution {
public:
void reverse(int start,int end,string&s){
    for(int i=start,j=end;i<j;i++,j--){
        swap(s[i],s[j]);
    }
}
    string finalString(string s) {
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='i'){
                reverse(0,i-1,s);
            }  
        }
        string ans;
        for(char c:s){
            if(c!='i')ans+=c;
        }
        return ans;
    }
};