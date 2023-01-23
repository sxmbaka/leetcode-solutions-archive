/**
 * Definition for singly-linked list.
 * class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public ListNode detectCycle(ListNode head) {
        if (head == null) {
            return null;
        }
        HashSet<ListNode> set = new HashSet<>();
        ListNode fast = head, slow = head;
        while (fast != null && fast.next != null) {
            if (set.contains(fast.next)) {
                return fast.next;
            } else if (set.contains(fast.next.next)) {
                return fast.next.next;
            }
            set.add(slow);
            slow = slow.next;
            fast = fast.next.next;
        }
        return null;
    }
}