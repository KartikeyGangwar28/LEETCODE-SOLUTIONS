class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        int n=num_people;
        vector<int>v(n);
        int start=1;
        while(candies>0){
               int i=0;
               while(i<n&&candies>0){
                if((candies-start)>=0){
                    v[i]+=start; 
                    candies-=start;}
                else{ 
                    v[i]+=candies;
                    return v;
                    }
               
                start++;
                  i++;
               }
        }
        return v;
    }
};