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
    ListNode* swapPairs(ListNode* head) {
        ListNode* ret = head;

        while(head && head->next){ // a=2, b=3; a += b; b = a-b; a -= b;
            head -> val += head -> next -> val;
            head -> next -> val = head -> val - head -> next -> val;
            head -> val = head -> val - head -> next -> val;

            head = head -> next -> next;
        }

        return ret;
    }
};