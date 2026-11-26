class Solution {
public:
struct comp{
     bool operator()(pair<int,int>&a,pair<int,int>&b){
             if(a.first!=b.first)return a.first<b.first;
             return a.second>b.second;
     }
};
    vector<int> topStudents(vector<string>& positive_feedback, vector<string>& negative_feedback, vector<string>& report, vector<int>& student_id, int k) {
        unordered_set<string>pst(positive_feedback.begin(),positive_feedback.end());
        unordered_set<string>nst(negative_feedback.begin(),negative_feedback.end());
        priority_queue<pair<int,int>,vector<pair<int,int>>,comp>pq;
        int n=report.size();
        for(int i=0;i<n;i++){
            int x=report[i].size();
            int score=0;
            for(int j=0;j<x;j++){
                string word="";
                while(j<x&&!isspace(report[i][j])){
                    word+=report[i][j];
                    j++;
                }
                if(pst.find(word)!=pst.end())score+=3;
                else if(nst.find(word)!=nst.end())score--;
            }
            pq.push({score,student_id[i]});
        }
        vector<int>ans;
        while(!pq.empty()&&k--){
            cout<<pq.top().first<<" "<<pq.top().second<<"\n";
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;

    }
};