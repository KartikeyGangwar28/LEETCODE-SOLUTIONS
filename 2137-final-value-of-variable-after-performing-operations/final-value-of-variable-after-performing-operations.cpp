class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
       int n=operations.size();
       int value=0;
       for(int i=0;i<n;i++){
        if(operations[i][1]=='+'){
             value+=1;
        }
        else{
            value-=1;
        }
       }
       return value;
    }
};