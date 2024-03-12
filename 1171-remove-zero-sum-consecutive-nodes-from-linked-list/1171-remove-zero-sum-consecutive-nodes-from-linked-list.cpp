class Solution {
public:
    ListNode* removeZeroSumSublists(ListNode* head) {
        unordered_map<int, ListNode*> prefix_sums;
        ListNode* sentinel = new ListNode(0);
        sentinel->next = head;
        int sum = 0;
        prefix_sums[0] = sentinel;
        ListNode* temp = head;

        while (temp) {
            sum += temp->val;
            if (prefix_sums.find(sum) != prefix_sums.end()) {
                ListNode* to_delete = prefix_sums[sum]->next;
                int temp_sum = sum + to_delete->val;
                while (to_delete != temp) {
                    prefix_sums.erase(temp_sum);
                    to_delete = to_delete->next;
                    temp_sum += to_delete->val;
                }
                prefix_sums[sum]->next = temp->next;
            } else {
                prefix_sums[sum] = temp;
            }
            temp = temp->next;
        }

        return sentinel->next;
    }
};