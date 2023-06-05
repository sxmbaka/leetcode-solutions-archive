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
    void swapNextTwo(ListNode* node) {
        ListNode* temp = node->next;
        node->next = node->next->next;
        temp->next = node->next->next;
        node->next->next = temp;
    }
    ListNode* swapPairs(ListNode* head) {
        if (!head or !head->next) return head;
        ListNode* sen = new ListNode(0, head);
        ListNode* trv = sen;
        while (trv->next and trv->next->next) {
            swapNextTwo(trv);
            trv = trv->next->next;
        }
        return sen->next;
    }
};