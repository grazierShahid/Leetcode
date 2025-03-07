/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val; int;
 *     ListNode *next, *prev;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode dummy;
        ListNode* res = &dummy;

        while(list1 && list2){
            if(list1->val <= list2 -> val){
                res->next = list1;
                list1 = list1->next;
            }
            else {
                res->next = list2;
                list2 = list2->next;
            }
            res=res->next;
        }
        res -> next = (list1) ? list1 : list2;
        
        return dummy.next;
    }
};