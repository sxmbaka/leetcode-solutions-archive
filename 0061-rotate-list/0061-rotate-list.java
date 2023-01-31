/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode rotateRight(ListNode head, int k) {
        if (head == null || head.next == null) {
            return head;
        }
        // calc lenght
        int len = 0;
        ListNode temp = head, splithead = null;
        while (temp != null) {
            len++;
            temp = temp.next;
        }
        k = k % len;
        if (k == 0) {
            return head;
        }
        temp = head;
        for (int i = 0; i < (len - k- 1); i++) {
            temp = temp.next;
        }
        splithead = temp.next;
        temp.next = null;
        temp = splithead;
        while (temp.next != null) {
            temp = temp.next;
        }
        temp.next = head;
        return splithead;
    }
}