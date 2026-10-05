class Solution {
public:
void reverse(string&s){
    int n=s.size();
    for(int i=0,j=n-1;i<j;i++,j--){
        swap(s[i],s[j]);
    }
}
    string processStr(string s) {
        int n=s.size();
        string result="";
        for(int i=0;i<n;i++){
            if(s[i]=='*'){
                if(result.size()==0){
                    continue;
                }
                else{
                   result.erase(result.end()-1);
                }
            }
            else if(s[i]=='%'){
                reverse(result);
                }
            else if(s[i]=='#'){
                result+=result;
            }
            else{result+=s[i];}
        }
        return result;
    }
};