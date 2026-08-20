class Solution {
public:
    bool validMountainArray(vector<int>& v) {
        int n=v.size();
        if(n<=2){
            return false;
        }
        int peak=INT_MIN;
        int max=*max_element(v.begin(),v.end());
        for(int i=0;i<n;i++){
              if(v[i]==max){
                peak=i;
                break;
              }
        }
        if(peak==0||peak==n-1){
            return false;
        }
        for(int i=0;i<peak-1;i++){
            if(v[i+1]<=v[i]||v[i]==max){
                return false;
            }
        }
        for(int i=peak+1;i<n;i++){
            if(v[i]==max){
                return false;
            }
            if(v[i-1]<=v[i]){
                return false;
            }
        }
        return true;
    }
};