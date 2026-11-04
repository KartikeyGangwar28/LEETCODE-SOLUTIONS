class MinStack {
public:
  stack<pair<int,int>>st;
    int mn=INT_MAX;
    MinStack() {
    
    }
    void push(int value) {
        mn=min(value,mn);
       st.push({value,mn});
    }
    void pop(){
        st.pop();
        if(st.size()==0){
            mn=INT_MAX;
            return;
        }
        mn=st.top().second;///////////////////////////////////////////////////////////
    }
    
    int top(){ 
        return st.top().first;
    }
    
    int getMin() {
        return st.top().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */