class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        string ans;
    for(int i=n-1;i>=0;i--){
        ans.push_back(s[i]);
    }
  cout<<ans;
    for(int i=0;i<ans.size();i++){
        if(isspace(ans[i])){
          ans.erase(ans.begin()+i);
          i--;
        }
        else{
            int first=i;
            int last=i;
            while(last<ans.size()&&(!isspace(ans[last]))){
                last++;
            }
            i=last;
            for(int j=first,k=last-1;j<k;j++,k--){
                swap(ans[j],ans[k]);
            }
        }
    }
    while(isspace(ans[ans.size()-1])){
           ans.erase(ans.end()-1);
    }
    return ans;
    }
};