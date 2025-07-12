class MinStack {
public:
    int arr[10000];
    int tp;
    MinStack() {
        tp = -1;
    }
    
    void push(int val) {
        arr[++tp] = val;
    }
    
    void pop() {
        if(tp >= 0) --tp;
    }
    
    int top() {
        if(tp < 0) return -1;
        return arr[tp];
    }
    
    int getMin() {
        if(tp < 0) return -1;
        int val = arr[0];
        for(int i = 1; i <= tp; i++){
            if(val > arr[i]) val = arr[i];
        }
        return val;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */