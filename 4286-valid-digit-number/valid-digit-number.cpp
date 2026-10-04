class Solution {
public:
    bool validDigit(int n, int x) {
        if(n<=9)return false;
         string s=to_string(n);

    //       char c=x+'0';
    //       cout<<c<<"\n";
    //      if(n<=9)return false;
    //      while(n!=0){
    //         s+=to_string(n%10);
    //         n=n/10;
    //      }
    //    //  cout<<s;
    //      n=s.size();
    //      if(s[n-1]==c)return false;
    //      for(int i=0;i<n;i++){
    //         if(s[i]==c)return true;
    //      }
    //    //  cout<<"acha";
    //      return false;
    n=s.size();
    char c=x+'0';
    if(s[0]==c)return false;
    for(int i=1;i<n;i++){
        if(s[i]==c)return true;
    }
    return false;

         
    }
};