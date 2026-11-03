class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int metal=0,paper=0,glass=0;
        int m=0,p=0,g=0;
        int n=garbage.size();
        for(int i=0;i<n;i++){
            int x=garbage[i].size();
            for(int j=0;j<x;j++){
                if(garbage[i][j]=='G'){glass++;g=max(g,i);}
                else if(garbage[i][j]=='M'){metal++;m=max(m,i);}
                else {paper++;p=max(p,i);}
            }
        }
        cout<<metal<<" "<<paper<<" "<<glass<<"\n";
        int i=0;
      while(p>=1){
            paper+=travel[i];
            i++;
            p--;
      }
      i=0;
      while(g>=1){
        glass+=travel[i];
        i++;
        g--;
      }
      i=0;
      while(m>=1){
        metal+=travel[i];
        i++;m--;
      }
    //     int def=1;
    //     int n=garbage.size();
    //     for(int i=0;i<n;i++){
    //         int x=garbage[i].size();
    //         int t=0;
    //         for(int j=0;j<x;j++){
    //             if(garbage[i][j]=='M'){
    //                metal+=1;
    //                if(t==0&&i!=0){
    //                 t=travel[i-1];
    //                }
    //             }
    //             metal+=t;
    //         }
    //     }
    //     for(int i=0;i<n;i++){
    //         int x=garbage[i].size();
    //         int t=0;
    //         for(int j=0;j<x;j++){
    //             if(garbage[i][j]=='P'){
    //                paper+=1;
    //                if(t==0&&i!=0){
    //                 t=travel[i-1];
    //                }
    //             }
    //             paper+=t;
    //              //cout<<paper<<" ";
    //         }
    //     }
    //     for(int i=0;i<n;i++){
    //         int x=garbage[i].size();
    //         int t=0;
    //         for(int j=0;j<x;j++){
    //             if(garbage[i][j]=='G'){
    //                glass+=1;
    //                if(t==0&&i!=0){
    //                 t=travel[i-1];
    //                }
    //             }
    //             glass+=t;
    //             cout<<glass<<" ";
    //         }
    //     }
    //    // cout<<metal<<" "<<paper<<" "<<glass;
        return metal+glass+paper;

    }
};