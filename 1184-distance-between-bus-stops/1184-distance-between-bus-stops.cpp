class Solution {
public:
    int distanceBetweenBusStops(vector<int>& d, int start, int destination) {
        int a = 0, b = 0;
        for (int i = start; i != destination; i = (i + 1) % d.size())
            a += d[i];
        for (int i = destination; i != start; i = (i + 1) % d.size())
            b += d[i];
        return min(a, b);
    }
};