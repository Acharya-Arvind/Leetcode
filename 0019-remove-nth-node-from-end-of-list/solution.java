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
    public ListNode removeNthFromEnd(ListNode head, int n) {

        ListNode ptr=head;
        if(head.next==null){
            return null;
        }
        int count=0;
        while(ptr!=null){
            ptr=ptr.next;
            count++;
        }
        int k=count-n;
        ptr=head;
        if(k==0){
            return head.next;
        }
        for(int i=0;i<k-1;i++){
            ptr=ptr.next;
        }
        ptr.next=ptr.next.next;
        return head;
        
    }
}
