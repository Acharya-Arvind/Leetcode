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
    public ListNode swapPairs(ListNode head) {
        
        if(head==null || head.next==null)
        return head;
        ListNode dummy=new ListNode(0);
        ListNode prev=dummy;
        ListNode cur=head;
        ListNode nextpair;
        ListNode next=null;
        while(cur!=null && cur.next!=null){

            nextpair=cur.next.next;
            next=cur.next;
            next.next=cur;
            cur.next=nextpair;
            prev.next=next;
            prev=cur;
            cur=nextpair;
          
        }
        return dummy.next;
        
    }
}
