class Solution {
public:
// bool allequal(vector<int>&v){
//     int start=v[0];
//     for(int x:v){
//         if(x!=start)return false;
//     }
//     return true;
// }
    int minOperations(int n) {
        //pattern hain-select elements from opposite end,increase left by 1,decrease right by 1,jo first element ke barabar ban jaye uske barabar sare karne honge
        //patter aa rhaa hai for n=8 is 7,5,3,1; basically start with n-1,add it to answe and decrease by 2 each time;
     int ans=0;
     int start=n-1;
     while(start>0){
          ans+=start;
          start-=2;
     }  //basically sum of alternate integers from n-1;
     return ans;
    }
};