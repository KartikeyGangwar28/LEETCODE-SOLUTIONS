class Solution {
public:
    string interpret(string command) {
        string ans;
        int n=command.size();
        for(int i=0;i<n;i++){
            if(command[i]=='G')ans+='G';
            else if(command[i]=='('&&command[i+1]==')'){
                ans+='o';
                i++;
            }
            else if(command[i]=='('&&command[i+1]!=')'){
                i++;
                while(command[i]!=')'){
                     ans+=command[i];
                     i++;
                }
            }
        }
        return ans;
    }
};