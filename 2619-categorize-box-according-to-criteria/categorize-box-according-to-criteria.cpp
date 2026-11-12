class Solution {
public:
long long int x=10000;unsigned long long int y=1000000000;
bool blky(int l, int w, int h, int m){
    
  if(l>=x||w>=x||h>=x)return true;
  if(1ULL*l*w*h>=y)return true;
  return false;
}
bool hvy(int m ){
return m>=100;
}
    string categorizeBox(int l, int w, int h, int m) {
        bool blk=blky(l,w,h,m);
        bool hv=hvy(m);
        if(blk&&hv)return "Both";
        else if(!blk&&!hv)return "Neither";
        else if(blk&&!hv)return "Bulky";
        else if(hv&&!blk)return "Heavy";
        return "muhehe";
    }
};