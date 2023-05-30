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
    ListNode* partition(ListNode* head, int x) {
        ListNode* sen = new ListNode(0, head);
        ListNode *p1 = sen, *p2 = sen;
        while (p1->next and p1->next->val < x) {
            p1 = p1->next;
        }
        p2 = p1->next;
        while (p2 and p2->next) {
            while (p2->next and p2->next->val >= x) {
                p2 = p2->next;
            }
            cout << p1->val << " " << p2->val << endl;
            if (p2->next) {
                ListNode* temp = new ListNode(p2->next->val, p1->next);
                p1->next = temp;
                if (p2->next->next) p2->next = p2->next->next;
                else p2->next = NULL;
            }
            p1 = p1->next;
        }
        return sen->next;
    }
};