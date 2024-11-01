// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode* reverseBetween(ListNode* head, int left, int right) {
//         ListNode* left1=head;
//         ListNode* prev=NULL;
//         int c=1;
//         while(left1!=NULL && c<left){
//             prev=left1;
//             left1=left1->next;
//             c++;
//         }
//         left1=prev;
//         ListNode* right1=NULL;
//         c=1;
//         while(right1!=NULL && c<right){
//             prev=right1;
//             right1=right1->next;
//             c++;
//         }
//         right1=prev->next;
//         ListNode* cur=left1->next;
//         ListNode* next=NULL;
//         prev=right1;
//         while(cur!=right1){
//             next=cur->next;
//             cur->next=prev;
//             prev=cur;
//             cur=cur->next;
//         }
//         left1->next=prev;


//         return head;
//     }
// };


class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (!head || left == right) return head;

        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* prev = dummy;

        for (int i = 1; i < left; i++) {
            prev = prev->next;
        }

        ListNode* start = prev->next;
        ListNode* then = start->next;

        
        for (int i = 0; i < right - left; i++) {
            start->next = then->next;
            then->next = prev->next;
            prev->next = then;
            then = start->next;
        }

        return dummy->next;
    }
};

