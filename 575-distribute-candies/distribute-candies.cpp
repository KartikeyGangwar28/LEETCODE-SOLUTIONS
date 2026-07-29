class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n=candyType.size();
        int maxi=n/2;
        unordered_map<int,int>m;
        for(int it:candyType){
            m[it]++;
        }
        int var=0;
        for(auto&it:m){
            var++;
            if(var==maxi){
                return var;}
        }
return var;
    }
};