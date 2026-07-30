class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
         string r;
         for(int i=0;i<n;i++){
            if(isalpha(s[i])){
                r.push_back(tolower(s[i]));
            }
           else if(isalnum(s[i])){
                r.push_back(s[i]);
            }
         }
         int l=r.size();
         for(int i=0,j=l-1;i<j;i++,j--){
            if(r[i]!=r[j]){
                return false;
            }
         }
        return true;
    //     int l=0,r=n-1;
    //    while(l<r){
    //         if(isalpha(s[l])&&!isalpha(s[r])){
    //                 r--;
    //         }
    //         else if(!isalpha(s[l])&&isalpha(s[r])){
    //             l++;
    //         }
    //         else if(isalpha(s[l])&&isalpha(s[r])){
    //             // s[l]=tolower(s[l]);
    //             // s[r]=tolower(s[r]);
    //             if(tolower(s[l])!=tolower(s[r])){
    //                 return false;
    //             }
    //             l++;
    //             r--;
    //         }
    //         else if(isalnum(s[l])&&isalnum(s[r])){
    //             if(s[r]!=s[l]){
    //                 return false;
    //             }
    //             l++;
    //             r--;
    //         }
    //         else if(isalnum(s[l])&&!isalnum(s[r])){
    //             l++;
    //         }
    //         else if(!isalnum(s[l])&&isalnum(s[r])){
    //             r--;
    //         }
    //    }
        
    //     return false;
    }
};