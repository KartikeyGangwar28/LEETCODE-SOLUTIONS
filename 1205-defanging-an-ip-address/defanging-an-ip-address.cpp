class Solution {
public:
    string defangIPaddr(string address) {
    
        int n=address.size();
        // address has fixed 3 dots
            string ans;
            ans.reserve(n+6);
        for(int i=0;i<n;i++){
            if(address[i]=='.'){
               ans+="[.]";
            }
            else{
                ans.push_back(address[i]);
            }
        }
        return ans;
    }
};