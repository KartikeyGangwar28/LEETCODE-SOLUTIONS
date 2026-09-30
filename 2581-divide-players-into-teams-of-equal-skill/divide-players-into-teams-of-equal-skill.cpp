class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(),skill.end());
        int n=skill.size();
        vector<vector<int>>v;
        for(int i=0,j=n-1;i<j;i++,j--){
            v.push_back({skill[i],skill[j]});
        }
        bool flag=true;
        int sum=0;
        int mul=0;
        for(int i=0;i<1;i++){
            sum+=v[i][0]+v[i][1];
            mul+=v[i][0]*v[i][1];
        }
        cout<<sum;
        int store=sum;
       long long int ans=mul;
        for(int i=1;i<n/2;i++){
            sum=0;
            int temp=1;
            for(int j=0;j<2;j++){
                    sum+=v[i][j];
                    temp*=v[i][j];
            }
            cout<<temp;
            if(sum!=store)return -1;
            ans+=temp;
        }
        return ans;
    }
};