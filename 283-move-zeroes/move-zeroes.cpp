class Solution {
public:
    void moveZeroes(vector<int>& v) {
        int n=v.size();
        if(n==1){
            return;
        }
        for(int i=0,j=1;j<n;j++){
    if(v[i]!=0){
        i++;
    }
    else if(v[i]==0&&v[j]!=0){
        swap(v[i],v[j]);
        i++;
    }
}

  

    }
};