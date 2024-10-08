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
    public ListNode mergeTwoLists(ListNode list1, ListNode list2) {
        ListNode ptr=list2;
        int n=0;
        ArrayList<Integer> arr=new ArrayList<>();
        int m=0;
        
        while(ptr!=null){
            m++;
            arr.add(ptr.val);
            ptr=ptr.next;
        }
        ptr=list1;
        ListNode temp=null;
        while(ptr!=null){
            n++;
            arr.add(ptr.val);
            temp=ptr;
            ptr=ptr.next;
        }
        Collections.sort(arr);
        if(list1==null)
        list1=list2;
        else
        temp.next=list2;
        ptr=list1;
        int i=0;
        while(ptr!=null){
            ptr.val=arr.get(i);
            i++;
            ptr=ptr.next;

        }
        return list1;

    }
}
