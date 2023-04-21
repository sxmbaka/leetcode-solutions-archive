class MyQueue {
    int queue[200];
    int rear = 0;
    int front = 0;
public:
    MyQueue() {
    }
    
    void push(int x) {
        if (!full()) {
            queue[this->rear] = x;
            this->rear++;
        }
    }
    
    int pop() {
        int val = queue[this->front];
        this->front++;
        return val;
    }
    
    int peek() {
        if (!empty()) {
            return queue[this->front];
        }
        return 0;
    }
    
    bool empty() {
        if (this->rear == this->front)
            return true;
        return false;
    }

    bool full() {
        if (this->rear == 200) 
            return true;
        return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */