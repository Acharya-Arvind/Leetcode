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
    public ListNode deleteDuplicates(ListNode head) {
        Solution s=new Solution();
        ArrayList<Integer> arr=new ArrayList<>();
        ListNode cur=head;
        while(cur!=null){
            arr.add(cur.val);
            cur=cur.next;
        }
        int flag;
        Set<Integer> set=new HashSet<>(arr);
        ArrayList<Integer> arr1=new ArrayList<>(set);
        Collections.sort(arr1);
        Collections.reverse(arr1);
        for(int i=0;i<arr1.size();i++)
        System.out.println(arr1.get(i));
       head=null;
         for(int i=0;i<arr1.size();i++){
            
            ListNode newnode=new ListNode(arr1.get(i));
            System.out.println(arr1.get(i));
            head=s.ins(newnode,head);

        }
        return head;

        
    }
}
