class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int s=flowerbed.size();
        if(n==0){
            return true;
        }
        if(s==1){
            if(flowerbed[0]!=0){
                return false;
            }
            return true;
        }
        for(int i=0;i<s;i++){
            if(i==0){
                if(flowerbed[i]==0&&flowerbed[i+1]==0){
                    flowerbed[i]=1;
                    n--;
                }
            }
            else if(i==s-1){
                if(flowerbed[i-1]==0&&flowerbed[i]==0){
                     flowerbed[i]=1;
                    n--;
                }
            }
                else if(flowerbed[i-1]==0&&flowerbed[i+1]==0&&flowerbed[i]==0){
                    n--;
                    flowerbed[i]=1;
                }
        }
        if(n<=0){
            return true;
        }
        return false;
    }
};