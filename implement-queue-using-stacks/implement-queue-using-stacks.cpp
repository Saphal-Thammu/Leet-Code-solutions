class MyQueue {
    stack<int> in;
    stack<int> out;
public:
    /** Initialize your data structure here. */
    MyQueue() {
        //stack<int> in;
        //stack<int> out;
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        in.push(x);
        
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        int result=peek();
        out.pop();
        return result;
        
    }
    
    /** Get the front element. */
    int peek() {
        if(out.empty()){
            while(!in.empty()){
               // int a=in.pop();
                out.push(in.top());
                in.pop();
                
            }
        }
        return out.top();
        
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return (in.empty() && out.empty());
        
    }
};
​
/**
