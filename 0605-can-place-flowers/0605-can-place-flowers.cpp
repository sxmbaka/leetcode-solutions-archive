class Solution {
public:
    bool canPlaceFlowers(vector<int>& a, int n) {
        a.insert(a.begin(), 0);
        a.push_back(0);
        for (auto i : a) cout << i << " ";
        for (int i = 0; i < a.size() - 2; i++) {
            if (a[i] == 0 and a[i + 1] == 0 and a[i + 2] == 0) 
            {
                a[i + 1] = 1;
                n--;
            }
        }
        return n <= 0;
    }
};