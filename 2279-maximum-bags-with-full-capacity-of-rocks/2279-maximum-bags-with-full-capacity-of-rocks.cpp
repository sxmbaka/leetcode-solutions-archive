class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int n = capacity.size();
        for (int i = 0; i < n; i++) {
            capacity[i] -= rocks[i];
        }
        sort(capacity.begin(), capacity.end());
        int idx = 0, full = 0;
        while (capacity[idx] == 0) {
            idx++;
            full++;
        }
        while (idx < n and additionalRocks > 0) {
            if (additionalRocks >= capacity[idx]) {
                full++;
                additionalRocks -= capacity[idx];
            }
            idx++;
        }
        return full;
    }
};