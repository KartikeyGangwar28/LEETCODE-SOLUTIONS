class Solution {
public:
bool odd(int x){
    return x%2!=0;
}
    bool threeConsecutiveOdds(vector<int>& arr) {
        int n=arr.size();
        int count=0;
        for(int i=0;i<n;i++){
            if(odd(arr[i])){
                count++;
                if(count==3){
                    return true;
                }
            }
            else{
                count=0;
            }
        }
        return false;
    }
};