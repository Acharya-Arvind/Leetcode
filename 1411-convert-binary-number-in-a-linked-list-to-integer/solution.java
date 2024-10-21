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
    public int getDecimalValue(ListNode head) {
        ArrayList<Integer> arr=new ArrayList<>();
        ListNode cur=head;
        while(cur!=null){
            arr.add(cur.val);
            cur=cur.next;
        }
        String ans="";
        for(int i=0;i<arr.size();i++){
            ans=ans+arr.get(i).toString();
        }
        return Integer.parseInt(ans,2);
        
    }
}
