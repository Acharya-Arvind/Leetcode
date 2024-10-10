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
    public ListNode reverseKGroup(ListNode head, int k) {

        ListNode dum=new ListNode(0);
        ListNode cur=head;
        ListNode tail=null;
        ListNode prev=dum;
        int num=0;

        while(cur!=null){
            tail=cur;
            while(cur!=null && num++ <k)
                cur=cur.next;
            if(num>=k){
                num=0;
                prev.next=reverse(tail,k);
                prev=tail;
            }
            else{
                prev.next=tail;
            }
        }
        return dum.next;
        




        
    }
    ListNode reverse(ListNode head,int k){

        ListNode prev=null;
        ListNode cur=head;
        ListNode next=null;
        while(cur!=null && k-- >0){
            next=cur.next;
            cur.next=prev;
            prev=cur;
            cur=next;
        }
        return prev;
    }
}
