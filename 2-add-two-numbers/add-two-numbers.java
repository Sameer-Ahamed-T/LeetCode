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
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        ListNode curr = new ListNode(0);
        ListNode l3 = curr;
        int carry = 0;
        while (l1 != null || l2 != null)
        {
            curr.val = carry;
            if (l1 != null) 
            {
                curr.val += l1.val;
                l1 = l1.next;
            }
            if (l2 != null) 
            {
                curr.val += l2.val;
                l2 = l2.next;
            }
            carry = curr.val / 10;
            curr.val %= 10;
            if (l1 != null || l2 != null) {
                curr.next = new ListNode(0);
                curr = curr.next;
            }
        }
        if (carry > 0) {
            curr.next = new ListNode(carry);
        }
        return l3;
    }
}