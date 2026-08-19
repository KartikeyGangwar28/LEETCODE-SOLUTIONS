class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size(),count=0,as=0;
          string ans;
          for(int i=0;i<n;i++){ 
            string ans;count=0;
           for(int j=i;j<n;j++){
                  if(ans.size()==0||(ans.find(s[j])==string::npos)){
                        ans.push_back(s[j]);
                        count+=1; 
                       
                  }
                  else if(ans.find(s[j])!=string::npos){
                    break;
                  }
           }  
           as=max(as,count);
            
          }
          return as;
    }
};