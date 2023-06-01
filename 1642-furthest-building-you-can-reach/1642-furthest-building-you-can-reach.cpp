class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        vector<int> dif;
        for (int i = 1; i < heights.size(); i++)
            dif.push_back(heights[i] - heights[i - 1]);
        int i = 0, bricks_used = 0;
        if (ladders == 0) {
            for (; i < dif.size(); i++) {
                if (dif[i] > 0) bricks_used += dif[i];
                if (bricks_used > bricks) return i;
            }
        }
        priority_queue <int, vector<int>, greater<int>> pq;
        while (ladders > 0 and i < dif.size()) {
            if (dif[i] > 0) {
                pq.push(dif[i]);
                ladders--;
            }
            i++;
        }
        for (; i < dif.size(); i++) {
            if (dif[i] > 0) {
                if (dif[i] <= pq.top()) bricks_used += dif[i];
                else {
                    pq.push(dif[i]);
                    bricks_used += pq.top();
                    pq.pop();
                }
            }
            if (bricks_used > bricks) break;
        }
        return i;
    }
};