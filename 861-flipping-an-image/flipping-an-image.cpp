class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
      int n=image.size();
      for(int i=0;i<n;i++){//try to do both modification in same array next time;
        for(int j=0,k=n-1;j<=k;j++,k--){
            swap(image[i][j],image[i][k]);
            if(j==k){
                image[i][j]=!image[i][j];
            }
            else{
            image[i][j]=!image[i][j];
            image[i][k]=!image[i][k];
            }
        }
      }
    //   for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         if(image[i][j]==0){
    //             image[i][j]=1;
    //         }
    //         else{
    //             image[i][j]=0;
    //         }
    //     }
    //   }
      return image;
    }
};