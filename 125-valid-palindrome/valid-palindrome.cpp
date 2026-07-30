class Solution {
public:
    bool isPalindrome(string s) {
         int n=s.size();
        int l=0,r=n-1;
  while(l<r){
    if(isspace(s[l])){
        l++;
    }
    else if(isspace(s[r])){
        r--;
    }
    else if(ispunct(s[l])){
        l++;
    }
    else if(ispunct(s[r])){
        r--;
    }
    else if(isalpha(s[l])&&isalpha(s[r])){
        if(tolower(s[l])!=tolower(s[r])){
               return false;
        }
        l++;
        r--;
       }
       else if(isalnum(s[l])&&isalnum(s[r])){
        if(s[l]!=s[r]){
            return false;
        }
        l++;
        r--;
       }
        // if(!isalpha(s[l])&&!isalpha(s[r])&&!isalnum(s[r])&&!isalnum(s[l]))
        else if(isalpha(s[l])&&isalnum(s[r])||isalpha(s[r])&&isalnum(s[l])){
            return false;
        }
       else {
        l++;
        r--;
       }
   } 
   return true;
    }
};