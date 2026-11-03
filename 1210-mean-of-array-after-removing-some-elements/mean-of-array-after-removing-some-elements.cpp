class Solution {
public:
    double trimMean(vector<int>& arr) {
        int n=arr.size();
        int small=((5*n)/100);
         int large=small;
         int start=0,end=n-1;
         cout<<n<<" "<<small<<" ";
         while(small--){
            start++;
            end--;
         }
          cout<<start<<" "<<end<<" ";
         sort(arr.begin(),arr.end());
         n=end-start+1;
        //  n+=1;
         double sum=0;
         while(start<=end){
            sum+=arr[start];
            start++;
         }
         return sum/n;
    }
};