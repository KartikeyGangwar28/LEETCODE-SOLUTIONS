class Solution {
public:
    void moveZeroes(vector<int>& v) {
        int n=v.size();
        int count=0;
        vector<int>r;
for(int i=0;i<n;i++){
    if(v[i]==0){
        count++;
    }
    else{
        r.push_back(v[i]);
    }
}
while(count--){
    r.push_back(0);
}
v=r;
    }
};