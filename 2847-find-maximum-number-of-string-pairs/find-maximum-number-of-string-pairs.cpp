class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int n=words.size();
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=n-1;j>i;j--){
             //  swap(words[j][0],words[j],[1]);
               if((words[i][0]==words[j][1])&&(words[i][1]==words[j][0]))count++;
            }
        }
        return count;
    }
};