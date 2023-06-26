class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) {
        priority_queue<int, vector<int>, greater<int>> left, right;
        deque<int> dq;
        long long i = 0, j = costs.size() - 1, result = 0, n = costs.size();
        // cout << n << endl;
        while (i < candidates and i < n) left.push(costs[i++]);
        while (j >= costs.size() - candidates and j >= 0 and j > i) right.push(costs[j--]);
        while (i <= j) dq.push_back(costs[i++]);
        while (k--) {
            if (right.empty() or left.top() <= right.top() and !left.empty()) {
                // cout << "adding " << left.top() << " from left" << endl;
                result += left.top();
                left.pop();
                if (dq.size()) {
                    // cout << "removing " << dq.front() << " from front" << endl;
                    int leftMostElement = dq.front();
                    left.push(leftMostElement);
                    dq.pop_front();
                }
            } else if (!right.empty()) {
                // cout << "adding " << left.top() << " from right" << endl;
                result += right.top();
                right.pop();
                if (dq.size()) {
                    // cout << "removing " << dq.back() << " from back" << endl;
                    int rightMostElement = dq.back();
                    right.push(rightMostElement);
                    dq.pop_back();
                }
            }
        }
        return result;
    }
};