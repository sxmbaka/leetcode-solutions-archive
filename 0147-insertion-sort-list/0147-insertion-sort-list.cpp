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
    ListNode* insertionSortList(ListNode* head) {
        int f[10001] = {};
        ListNode* ptr = head;
        while (ptr) {
            f[ptr->val + 5000]++;
            ptr = ptr->next;
        }
        head = NULL;
        ptr = head;
        // for (int i = 5000; i < 10001; i++) cout << f[i] << " ";
        for (int i = 0; i < 10001; i++) {
            for (int j = 0; j < f[i]; j++) {
                ListNode* n = new ListNode(i - 5000, NULL);
                if (!head) {
                    head = n;
                    ptr = n;
                } else {
                    ptr->next = n;
                    ptr = ptr->next;
                }
            }
        }
        return head;
    }
};