class MinStack {
private:
    stack<long> min_stk;
    stack<long> stk;

public:
    MinStack() {
        
    }
    
    void push(int val) {
        if((int)min_stk.size() > 0) {
            if(min_stk.top() > val){
                min_stk.push(val);
            }
            else min_stk.push(min_stk.top());
        }
        else min_stk.push(val);
        stk.push(val);
    }
    
    void pop() {
        min_stk.pop();
        stk.pop();
    }
    
    int top() {
        return stk.top();
    }
    
    int getMin() {
        return min_stk.top();
    }
};
