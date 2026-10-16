class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
        int n=events.size();
        int score=0,counter=0;
        for(string c:events){
            if(c=="WD")score+=1;
            else if(c=="NB")score+=1;
            else if(c=="W"&&counter<=9)counter+=1;
            else score+=stoi(c);
            if(counter==10)break;

        }
        return {score,counter};
    }
};