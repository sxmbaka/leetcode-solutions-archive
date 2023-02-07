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
    public void reorderList(ListNode head) {
        Stack<ListNode> s = new Stack<>();
        ListNode temp = head, st, ans;
        int len = 0;
        while (temp != null) {
            s.push(temp);
            temp = temp.next;
            len++;
        }
        temp = head;
        for (int i = 0; i < len/2; i++) {
            st = s.pop();
            st.next = temp.next;
            temp.next = st;
            temp = temp.next.next;
        }
        temp.next = null;
    }
}