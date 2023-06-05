class Solution {
public:
    int getDelX(vector<int>& a, vector<int>& b) { 
        return a[0] - b[0]; 
    }
    int getDelY(vector<int>& a, vector<int>& b) { 
        return a[1] - b[1]; 
    }
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int delX = getDelX(coordinates[0], coordinates[1]);
        int delY = getDelY(coordinates[0], coordinates[1]);

        for (int i = 2; i < coordinates.size(); i++) 
            if (delX * getDelY(coordinates[0], coordinates[i]) != delY * getDelX(coordinates[0], coordinates[i])) 
                return false;
        
        return true;
    }
};