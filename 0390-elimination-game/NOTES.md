Brute Force (TLE)

```
class Solution {
public:
    int lastRemaining(int n) {
        int times = floor(log2(n));
        int skip = 0, k = 0;
        int i = 0;
        vector<int> arr(n, 0);
        for (auto i = 0; i < n; i++) arr[i] = i + 1;
        bool ulta = false;
        while (times--) {
            k++;
            skip = pow(2, k);
            if (!ulta) {
                i = 0;
                while(arr[i] < 0) i++;
                // i--;
                while (i < n) {
                    arr[i] = -1;
                    i += skip;
                }
                ulta = true;
            }
            else {
                i = n - 1;
                while (arr[i] < 0) i--;
                // i++;
                while (i >= 0) {
                    arr[i] = -1;
                    i -= skip;
                }
                ulta = false;
            }
            // for (auto i : arr) cout << i << " ";
            // cout << endl;
        }
        for (auto i : arr) {
            if (i != -1) return i;
        }
        return 1;
    }
};
```
