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
    public boolean isPalindrome(ListNode head) {
        int i, j, l = 0;
        ListNode temp = head;
        ArrayList<Integer> arr = new ArrayList<>();
        while (temp != null) {
            arr.add(temp.val);
            l++;
            temp = temp.next;
        }
        i = 0;
        j = l-1;
        while (i < j) {
            if (arr.get(i) != arr.get(j)) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
}