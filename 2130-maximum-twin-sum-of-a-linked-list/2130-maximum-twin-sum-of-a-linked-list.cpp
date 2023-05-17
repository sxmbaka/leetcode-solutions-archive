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
    
    ListNode* reverseList(ListNode* head) {
        if (!head or !head->next) return head;
        stack<ListNode *> s;
        while (head) {
            s.push(head);
            head = head->next;
        }
        head = s.top();
        s.pop();
        ListNode* temp = head;
        while (!s.empty()) {
            temp->next = s.top();
            s.pop();
            temp = temp->next;
        }
        temp->next = NULL;
        return head;
    }
    
    int pairSum(ListNode* head) {
        int cnt = 0, ans = INT_MIN;
        ListNode *temp = head;
        while (temp) {
            cnt++;
            temp = temp->next;
        }
        int t = cnt / 2 - 1;
        temp = head;
        while (t--) {
            temp = temp->next;
        }
        temp->next = reverseList(temp->next);
        // temp = head;
        temp = temp->next;
        ListNode *start = head;
        cout << start->val << " " << temp->val;
        while (temp) {
            ans = max(ans, temp->val + start->val);
            temp = temp->next;
            start = start->next;
        }
        return ans;
    }
};