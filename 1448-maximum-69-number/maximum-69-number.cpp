class Solution {
public:
    int maximum69Number (int num) {
        if(num==9||num==6){
            return 9;
        }
        int store=0;
        string s=to_string(num);
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]!='9'){
                s[i]='9';
                break;
            }
        }
        return stoi(s);
    }
};