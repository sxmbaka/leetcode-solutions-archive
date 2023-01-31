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
    public ListNode oddEvenList(ListNode head) {
        if (head == null) {
            return null;
        }
        int count = 0;
        ListNode tail = head, temp = head;
        while (tail.next != null) {
            tail = tail.next;
            count++;
        }
        for (int i = 0; i < (count + 1)/2; i++) {
            ListNode newNode = new ListNode(temp.next.val, null);
            tail.next = newNode;
            tail = tail.next;
            temp.next = temp.next.next;
            temp = temp.next;
        }
        return head;
    }
}