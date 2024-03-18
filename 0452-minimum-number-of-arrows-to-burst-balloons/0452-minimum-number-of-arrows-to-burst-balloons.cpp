class Solution {
private: 
    static bool compare(vector<int>& a, vector<int>& b) {
        if (a[0] != b[0])
            return a[0] < b[0];
        else
            return a[1] < b[1];
    }
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end(), compare);
        int previous_end = points[0][1], result = 1;
        for (auto point : points) {
            if (point[0] > previous_end) {
                result++;
                previous_end = point[1];
            }
            else if (point[0] <= previous_end) {
                previous_end = min(point[1], previous_end);
            }
        }
        return result;
    }
};