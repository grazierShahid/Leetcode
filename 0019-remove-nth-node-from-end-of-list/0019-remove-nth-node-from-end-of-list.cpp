/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* ret = new ListNode(0, head);
        ListNode* dum=ret;

        for(int i=0; i<n; i++){
            head = head -> next;
        }

        while(head){
            head = head -> next;
            dum = dum -> next;
        }
        dum -> next = dum -> next -> next;
        return ret -> next;
    }
};