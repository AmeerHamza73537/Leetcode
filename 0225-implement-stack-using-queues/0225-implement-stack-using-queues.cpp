class MyStack {
public:
queue<int> q;
int up;
    MyStack() {
        up = -1;
    }
    
    void push(int x) {
        q.push(x);
        up++;
    }
    
    int pop() {
        int bc;
        for(int i = 0; i <= up; i++){ 
            if(i == up){
                bc = q.front();
                up--;
                q.pop();
                break;
            }
            int ab = q.front();
            q.pop();
            q.push(ab);
        }
        return bc;
    }
    
    int top() {
        return q.back();
    }
    
    bool empty() {
        return q.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */