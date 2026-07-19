class Solution {
public:
    vector<int> twoSum(vector<int>& v, int target) {
       int n=v.size();
       for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
              if(v[j]+v[i]==target){
                return{i,j};
              }
        }
       }
       return{-1,-1};
    }
};