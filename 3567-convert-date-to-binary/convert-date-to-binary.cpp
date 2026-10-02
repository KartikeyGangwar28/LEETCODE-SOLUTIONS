class Solution {
public:
string toBin(int x){
   int ans=0;
   string rem;
   while(x!=0){
    ans=0;
     ans=ans*10+(x%2);
     if(ans==0)rem+='0';
     else rem+='1';
      x=x/2;
    }
       ans=rem.size();
       for(int i=0,j=ans-1;i<j;i++,j--)swap(rem[i],rem[j]);
    return rem;
}
    string convertDateToBinary(string date) {
        int year=0,month=0,day=0;
        int n=date.size();
         int i=0;
        while(i!=4){
            year=year*10+(date[i]-'0');
            i++;
        }
        i++;
        while(i!=7){
            month=month*10+(date[i]-'0');
          i++;
        }
        i++;
        while(i<n){
            day=day*10+(date[i]-'0');
               i++;
        }
        string d=toBin(day);
        string y=toBin(year);
        string m=toBin(month);
        cout<<day<<"-"<<month<<"-"<<year;
        string ans=y+"-"+m+"-"+d;
        return ans;
    }
};