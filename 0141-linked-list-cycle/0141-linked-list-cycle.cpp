/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* it = head;
        
        map<ListNode*, bool> mp;
        while(it != NULL){
            if(mp.count(it)) return true;
            mp[it] = true;
            it = it->next;
        }
        return false;
    }
};