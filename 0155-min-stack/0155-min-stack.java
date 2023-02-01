class MinStack {
    Stack<Integer> main, minStack;

    public MinStack() {
        this.main = new Stack<Integer>();
        this.minStack = new Stack<Integer>();
    }
    
    public void push(int val) {
        this.main.push(val);
        if (this.minStack.empty()) {
            this.minStack.push(val);
        } else if (val <= this.minStack.peek()) {
            this.minStack.push(val);
        }
    }
    
    public void pop() {
        int poppend = this.main.pop();
        if (poppend == this.minStack.peek()) {
            this.minStack.pop();
        }
    }
    
    public int top() {
        return this.main.peek();
    }
    
    public int getMin() {
        return this.minStack.peek();
    }
}

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(val);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */