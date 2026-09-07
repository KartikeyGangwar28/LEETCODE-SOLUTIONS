class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n=arr.size();
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0){
                arr.insert(arr.begin()+i,0);
                i+=1;
            }
        }
        if(arr.size()>n){
        arr.erase(arr.begin()+n,arr.end());
        }
     
    }
};