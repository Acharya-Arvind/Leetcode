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

    ListNode ins(ListNode newnode, ListNode head){
        if(head!=null){
            newnode.next=head;
            head=newnode;
         }
         else{
        head=newnode;
         }
        return head;
    }


    public ListNode mergeKLists(ListNode[] lists) {
        ListNode head=null;
        Solution s=new Solution();
        ArrayList<Integer> arr=new ArrayList<>();
        for(int i=0;i<lists.length;i++){
           ListNode cur=lists[i];
           while(cur!=null){
            arr.add(cur.val);
            cur=cur.next;
           }
        }
        Collections.sort(arr);
        Collections.reverse(arr);
        for(int i=0;i<arr.size();i++){
            
            ListNode newnode=new ListNode(arr.get(i));
            head=s.ins(newnode,head);

        }
        return head;
    }
}
