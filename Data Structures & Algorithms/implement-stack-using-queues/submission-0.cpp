class MyStack {
private:
    queue<int>st;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        st.push(x);

        int n = st.size();
        for (int i = 0; i < n - 1; i++) {
            st.push(st.front());
            st.pop();
        }
    }
    
    int pop() {
        int ret = this->st.front();
        st.pop();
        return ret;
    }
    
    int top() {
        return this->st.front();
    }
    
    bool empty() {
        return this->st.empty();
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