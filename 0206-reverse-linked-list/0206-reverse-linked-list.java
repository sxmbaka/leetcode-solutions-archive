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
    public ListNode reverseList(ListNode head) {
        if (head == null || head.next == null) {
            return head;
        }
        Stack<ListNode> s = new Stack<>();
        ListNode temp = head;
        while (temp.next != null) {
            s.push(temp);
            temp = temp.next;
        }
        head = temp;
        while (!s.empty()) {
            temp.next = s.pop();
            temp = temp.next;
        }
        temp.next = null;
        return head;
    }
}