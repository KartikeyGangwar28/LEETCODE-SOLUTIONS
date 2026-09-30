class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
     vector<int>ans;
     int n=nums.size();
     for(int i=0;i<n;i++){
        if(nums[i]<=9){
            ans.push_back(nums[i]);
        }
        else{
            vector<int>temp;
            int x=nums[i];
            while(x!=0){
                temp.push_back(x%10);
                x=x/10;
                
            }
            x=temp.size();
            for(int j=0,k=x-1;j<k;j++,k--){
                swap(temp[j],temp[k]);
            }
            ans.insert(ans.end(),temp.begin(),temp.end());
        }
     }   
     return ans;
    }
};