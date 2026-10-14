class Solution {
public:
    string getHint(string secret, string guess) {
        int n=secret.size();
        int bull=0,cows=0;
                unordered_map<char,int>mp;
        for(int i=0;i<n;i++){
            if(secret[i]==guess[i]){
                bull++;
                secret[i]='Z';
                guess[i]='Z';
            }
            else{
                mp[guess[i]]++;
            }
        }
        // for(char c:guess){
        //     if(c!='Z')mp[c]++;
        // }
        for(int i=0;i<n;i++){//hashing baad mein hi hogi because pahle ki to for 2 same values of secret code we can have one cow+one bull whcih is not possible or maybe it is-nah it's not caues errors in 11,01 typa cases
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
    //so always prefer concatenation as it is valid for both character and string
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