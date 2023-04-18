class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> indices, ans;
        for (int i = 0; i < boxes.size(); i++) {
            if (boxes[i] == '1') indices.push_back(i);
        }
        for (int i = 0; i < boxes.size(); i++) {
            int sum = 0;
            for (auto j : indices) 
                sum += abs(i - j);
            ans.push_back(sum);
        }
        return ans;
    }
};