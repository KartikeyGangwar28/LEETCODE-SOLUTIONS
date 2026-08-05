class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>ans;
        if(left<10&&right>=10){
            while(left<10){
                ans.push_back(left);
                left++;
            }
        }
       for(int i=left;i<=right;i++){
        int temp=i;
        bool flag=true;
        while(temp!=0){
            int rem=temp%10;
            if(rem==0){
                flag=false;
                break;
            }
            if(i%rem!=0){
                flag=false;
            }
            temp=temp/10;
        }
        if(flag){
            ans.push_back(i);
        }
       }
       return ans;
    }
};