class MinStack {
private:
    vector<int> stack;
    vector<int> min_stack{INT_MAX};
public:
    /** initialize your data structure here. */
    MinStack() {
        
    }
    
    void push(int x) {
        min_stack.push_back(min(x, getMin()));
        stack.push_back(x);
    }
    
    void pop() {
        min_stack.pop_back();
        
        stack.pop_back();
       
    }
    
    int top() {
        return stack.back();
    }
    
    int getMin() {
        return min_stack.back();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(x);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */