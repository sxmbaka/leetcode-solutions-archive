class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> pq;
        int sum = 0;
        for (auto i : piles) {
            sum += i;
            pq.push(i);
        }
        while (k--) {
            int temp = pq.top();
            sum -= floor(temp / 2);
            pq.pop();
            pq.push(temp - floor(temp / 2));
        }
        return sum;
    }
};