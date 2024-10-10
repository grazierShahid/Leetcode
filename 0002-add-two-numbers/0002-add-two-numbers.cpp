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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int car=0, tmp=0;
        ListNode* ret = new ListNode();
        ListNode* res = ret;
        
        while(l1 != nullptr || l2 != nullptr || car){
            tmp = car;
            if(l1){
                tmp += l1 -> val;
                l1 = l1 -> next;
            }
            if(l2){
                tmp += l2 -> val;
                l2 = l2 -> next;
            }

            car = tmp/10;
            int dig = tmp % 10;
            ret -> next = new ListNode(dig);
            ret = ret -> next;
        }

        return res -> next;
    }
};