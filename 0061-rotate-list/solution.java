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
        if(head==null || head.next==null || k==0)
        return head;
        ListNode cur=head;
        int c=0;
        while(cur!=null){
            c++;
            cur=cur.next;
        }
        k=k%c;
        if(k==0)
        return head;
        for(int i=0;i<k;i++){
            cur=head;
            ListNode prev=null;
            while(cur.next!=null){
                prev=cur;
                cur=cur.next;
                }
                prev.next=null;
                cur.next=head;
                head=cur;
        }
        return head;
    }
}
