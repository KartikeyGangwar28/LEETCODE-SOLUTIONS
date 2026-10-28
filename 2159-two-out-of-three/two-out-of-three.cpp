class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
  unordered_map<int,int>a;unordered_map<int,int>b;unordered_map<int,int>c;
  int mx=0;
  for(int x:nums1){
    a[x]=1;
    mx=max(mx,x);
  }
   for(int x:nums2){
    b[x]=1;
      mx=max(mx,x);
  }
   for(int x:nums3){
    c[x]=1;
      mx=max(mx,x);
  }
  vector<int>ans;
//   for(auto&it:a){
//     if(b.count(it.first)!=0&&c.count(it.first)!=0)ans.push_back(it.first);
//     else if(it.second!=0&&b.count(it.first)!=0)ans.push_back(it.first);
//     else if(it.second!=0&&c.count(it.first)!=0)ans.push_back(it.first);
//   }
 
 for(int i=1;i<=mx;i++){
     if(b.count(i)!=0&&c.count(i)!=0)ans.push_back(i);
    else if(a.count(i)!=0&&b.count(i)!=0)ans.push_back(i);
    else if(a.count(i)!=0&&c.count(i)!=0)ans.push_back(i);
 }
 return ans;

    }
};