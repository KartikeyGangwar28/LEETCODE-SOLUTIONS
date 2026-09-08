class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        int n=words.size();
        string s;
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=0;j<words[i].size();j++){
                int index=words[i][j]-96;
                cout<<"index:"<<index<<"\n";
                sum+=weights[index-1];
            }

            sum=sum%26;
          char c= '{'-sum-1;
          s.push_back(c);
        }
        return s;
     
    }

};