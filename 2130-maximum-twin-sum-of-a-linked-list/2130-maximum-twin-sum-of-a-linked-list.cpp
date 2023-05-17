/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int pairSum(ListNode* head) {
        int cnt = 0, ans = INT_MIN;
        ListNode *temp = head;
        while (temp) {
            cnt++;
            temp = temp->next;
        }
        stack<int> s;
        int t = cnt / 2;
        temp = head;
        while (t--) {
            s.push(temp->val);
            temp = temp->next;
        }
        while (temp) {
            ans = max(ans, temp->val + s.top());
            s.pop();
            temp = temp->next;
        }
        return ans;
    }
};