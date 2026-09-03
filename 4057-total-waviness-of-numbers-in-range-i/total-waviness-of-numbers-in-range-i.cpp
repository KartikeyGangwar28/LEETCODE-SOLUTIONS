class Solution {
public:
int iswavy(int x){
    int count=0;
    string s=to_string(x);
    int n=s.size();
    for(int i=1;i<n-1;i++){
        if(((s[i]>s[i+1])&&(s[i]>s[i-1]))||((s[i]<s[i+1])&&(s[i]<s[i-1]))){
            count++;
            // i++;
        }
    }
    return count;
    }
    int totalWaviness(int num1, int num2) {
        int count=0;
        for(int start=num1;start<=num2;start++){
                count+=iswavy(start);
        }
        return count;
    }
};