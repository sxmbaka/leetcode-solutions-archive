class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int ptr = 0, len = popped.size();
        stack<int> s;
        for (auto p : pushed) {
            s.push(p);
            // cout << "pushed " << p << ".\n";
            while (!s.empty() && ptr < len && s.top() == popped[ptr]) {
                // cout << "popped " << s.top() << ".\n";
                s.pop();
                ptr++;
            }
        }
        if (ptr == len) return true;
        else return false;
    }
};