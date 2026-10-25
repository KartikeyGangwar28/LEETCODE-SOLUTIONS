class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int n=s.size();
        int x=0;
        int z=spaces.size();
        string ans;
        for(int i=0;i<n;i++){
            if(x<z&&i==spaces[x]){
                cout<<"check";
                ans+=" ";
                x++;
            }
            ans+=s[i];
        }
        return ans;
    }
};