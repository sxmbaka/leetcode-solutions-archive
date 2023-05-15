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
    ListNode* swapNodes(ListNode* head, int k) {
        int n = 0, m = 0;
        ListNode* t = head;
        while (t) {
            n++;
            t = t->next;
        }
        t = head;
        ListNode* first = NULL;
        ListNode* second = NULL;
        while (t) {
            // cout << m << " " << n - k << endl;
            if (m == k - 1) first = t;
            if (m == (n - k)) second = t;
            t = t->next;
            m++;
        }
        // cout << n << m;?
        // cout << first->val << " ;; " << second->val;
        swap(first->val, second->val);
        return head;
    }
};