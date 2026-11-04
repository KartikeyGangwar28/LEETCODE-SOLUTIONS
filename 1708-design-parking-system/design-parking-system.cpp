class ParkingSystem {
public:
  // vector<int>b;vector<int>m;vector<int>s;
   int i=0,j=0,k=0;
   int b=0,m=0,s=0;
    ParkingSystem(int big, int medium, int small) {
      b=big;m=medium;s=small;
    }
    
    bool addCar(int t) {
         if(t==1){
            if(i==b)return false;
            i++;
         }
         else if(t==2){
            if(j==m)return false;
            j++;
         }
         else if(t==3){
            if(k==s)return false;
            k++;
         }
         return true;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */