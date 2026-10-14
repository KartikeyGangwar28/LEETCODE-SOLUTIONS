class Solution {
public:
    string getHint(string secret, string guess) {
        int n=secret.size();
        int bull=0,cows=0;
        for(int i=0;i<n;i++){
            if(secret[i]==guess[i]){
                bull++;
                secret[i]='Z';
                guess[i]='Z';
            }
        }
        unordered_map<char,int>mp;
        for(char c:guess){
            if(c!='Z')mp[c]++;
        }
        for(int i=0;i<n;i++){
            if(secret[i]!='Z'){
                if(mp[secret[i]]!=0){
                    cows++;
                    mp[secret[i]]--;
                }
            }
        }
        string ans="";
    //     if(bull==0){
    //         ans.push_back('0');//push back is only valid for characters in a string to add a string only concatenation will work
    //     }
    //  else{ 
    //      while(bull!=0){
    //     ans.push_back(bull%10+'0');
    //     bull/=10;;
    //    }
    ans+=to_string(bull);
    //    }
        ans+='A';
        // if(cows==0){
        //     ans.push_back('0');
        // }
        //else 
        ans+=to_string(cows);
        ans+='B';
        return ans;
    
    }
};