class Solution {
public:
    long long maximumOr(vector<int>& l, int k) {
        vector<long long> nums(l.size());
        int n = nums.size();
        for (int i = 0; i < n; i++) nums[i] = l[i];
        vector<int> pr(n), sf(n);
        pr[0] = nums[0];
        sf[n-1]=nums[n-1];
        for (int i = 1; i < n; i++) 
            pr[i] = pr[i - 1] | nums[i];
        for (int i = n - 2; i >= 0; i--) 
            sf[i] = sf[i + 1] | nums[i];
        nums.insert(nums.begin(), 0);
        pr.insert(pr.begin(), 0);
        sf.insert(sf.begin(), 0);
        pr.push_back(0);
        sf.push_back(0);
        for (int i = 1; i < n + 1; i++) {
            nums[i] = nums[i] * pow(2, k);
            // pr[i] = pr[i] * pow(2, k);
            // sf[i] = sf[i] * pow(2, k);
        }
        long long ans = INT_MIN;
        for (int i = 1; i < n + 1; i++) {
            long long x = nums[i] | pr[i - 1] | sf[i + 1];
            ans = max(ans, x);
        }
        // for (auto i: pr) cout << i << " ";
        // cout << endl;
        // for (auto i : sf) cout << i << " ";
        return ans;
    }
};