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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        int idx = 0;
        ListNode *itr1 = list1, *itr2 = list2;
        ListNode *start = NULL, *end = NULL;
        while (idx < a - 1) {
            itr1 = itr1->next;
            idx++;
        }
        start = itr1;
        while (idx <= b) {
            itr1 = itr1->next;
            idx++;
        }
        end = itr1;
        // cout << start->val << endl;
        // cout << end->val << endl;
        
        start->next = list2;
        while (itr2->next) {
            itr2 = itr2->next;
        }
        itr2->next = end;
        return list1;
    }
};