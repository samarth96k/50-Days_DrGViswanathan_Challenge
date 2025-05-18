class MinStack {
public:
    stack<pair<int,int>> st;
    int minimum;
    MinStack() {
        
    }
    
    void push(int val) {
        if(st.empty()){st.push({val,val}); minimum = val;}
        else{
            if(val<minimum) minimum = val;
            st.push({val,minimum});
        }

    }
    
    void pop() {
        st.pop();
        if(!st.empty()) minimum = st.top().second;
    }
                                                                                
    int top() {
        return st.top().first;
    }
    
    int getMin() {
        return st.top().second;
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