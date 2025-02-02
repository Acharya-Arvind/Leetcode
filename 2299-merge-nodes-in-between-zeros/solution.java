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
    public ListNode mergeNodes(ListNode head) {
        ListNode ans=new ListNode(0);
        ListNode cur=ans;
        ListNode ptr=head;
        int sum=0;
        while(ptr!=null){
            if(ptr.val==0) {
                if(ptr!=head || ptr.next==null){
                    cur.next=new ListNode(sum);
                    cur=cur.next;
                }
                sum=0;
            }
            else{
                sum+=ptr.val;
            }
            ptr=ptr.next;
        }
        return ans.next;
    }
}
