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
    public ListNode sortList(ListNode head) {
        ListNode ptr=head;
        int n=0;
        while(ptr!=null){
            n++;
            ptr=ptr.next;
        }
        int[] arr=new int[n];
        ptr=head;
        int i=0;
        while(ptr!=null){
            arr[i]=ptr.val;
            ptr=ptr.next;
            i++;
        }
        Arrays.sort(arr);
        i=0;
        ptr=head;
        while(ptr!=null){
            ptr.val=arr[i];
            ptr=ptr.next;
            i++;
        }
        return head;
        
    }
}
