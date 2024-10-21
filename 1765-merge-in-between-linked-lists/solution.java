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
    public ListNode mergeInBetween(ListNode list1, int a, int b, ListNode list2) {

    ListNode cur=list1;
    ListNode next=null;
    int i=0;
    while(cur!=null && i<=b){
        if(i<a){
            next=cur;
        }
        cur=cur.next;
        i++;
    }
    next.next=list2;
    
    next=list2;
    while(next.next!=null){
next=next.next;
    }
    next.next=cur;
    return list1;
}}
