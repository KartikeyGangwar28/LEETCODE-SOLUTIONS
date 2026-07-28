class Solution {
public:
    string smallestPalindrome(string s) {
        map<char,int> m;
        for(char c : s) m[c]++;

        string left = "";
        char mid = 0;

        for(auto &it : m){
            left.append(it.second / 2, it.first);  
            if(it.second % 2)
                mid = it.first;
        }

        string right = left;
        reverse(right.begin(), right.end());

        if(mid)
            return left + string(1, mid) + right;
        return left + right;
    }
};