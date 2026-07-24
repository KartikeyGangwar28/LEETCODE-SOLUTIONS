class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string>s;
        for(int i=0;i<n;i++){
              int j=i+1;
              if(j%3==0&&j%5==0){
                  s.push_back("FizzBuzz");
              }
              else if(j%3==0){
                s.push_back("Fizz");
              }
              else if(j%5==0){
                s.push_back("Buzz");
              }
              else{
                s.push_back(to_string(j));
              }
        }
        return s;
    }
};