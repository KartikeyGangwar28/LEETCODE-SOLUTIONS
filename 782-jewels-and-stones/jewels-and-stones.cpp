class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int n=jewels.size();
        unordered_map<char,int>m;
        for(char c:stones){
            m[c]++;
        }
         int count=0;
        //     for(int i=0;i<n;i++){
        //         if(m.find(jewels[i])!=m.end()){
        //             count+=m[jewels[i]];
        //         }
        // }
        for(char c:jewels){
            count+=m[c];
        }
         return count;
     
     
    }
};