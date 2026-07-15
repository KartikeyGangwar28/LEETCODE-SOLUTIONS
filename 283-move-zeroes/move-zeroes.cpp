class Solution {
public:
    void moveZeroes(vector<int>& v) {
        int n=v.size();
        int count=0;
for(int i=0;i<n;i++){
    if(v[i]==0){
        count++;
    }
}
for(int i=0;i<n-count;i++){
    if(v[i]==0){
         v.erase(v.begin()+i);//O(n)
          v.emplace_back(0);
          i--;
    }
}

    }
};