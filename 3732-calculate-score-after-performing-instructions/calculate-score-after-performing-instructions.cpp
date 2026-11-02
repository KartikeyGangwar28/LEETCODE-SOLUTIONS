class Solution {
public:
    long long calculateScore(vector<string>& in, vector<int>& v) {
        long long score=0;
        vector<int>black(100001,0);
        //int curr=0;
        int n=v.size();
        // int x=in.size();
        int i=0;
       while(i<n&&i>=0){
        if(black[i]!=0)break;
         black[i]=1;//PLACEMENT MATTERS
         if(in[i]=="add"){
            score+=v[i];
            i+=1;
        }
        else{
            i+=v[i];
        }
      //  cout<<i<<" score: "<<score<<"\n";
    //    black[i]=1;YAHAN PE BLACKLIST HUM CURRECNT I KO NHI I+=V[I]KO KAR RAHE THE SO CHECK IF BLACKLISTED USKE BAAD AGAR NOT THEN THEN BLACLIST ONCE ONLY;
       
       }
        return score;
    }
};