class Solution {
public:
vector<int>store;
void task(int x){
   while(x!=0){
    store.push_back(x%10);
    x/=10;
   }
}
    int splitNum(int num) {
          task(num);
          sort(store.begin(),store.end());
          int odd=0,even=0;
          int n=store.size();
          for(int i=0;i<n;i++){
            if(i%2!=0)odd=odd*10+store[i];
           else even=even*10+store[i];
          }
         
          return odd+even;
          
    }
};