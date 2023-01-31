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
    public ListNode removeElements(ListNode head, int valu) {
        if (head == null) {
            return null;
        }
        ListNode sentinel = new ListNode(0, head);
        ListNode temp = sentinel;
        while (temp.next != null) {
            if (temp.next.val == valu) {
                temp.next = temp.next.next;
            }
            else {
                temp = temp.next;
            }
        }
        return sentinel.next;
    }
}