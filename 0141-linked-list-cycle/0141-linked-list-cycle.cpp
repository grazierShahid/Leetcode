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
        auto it = head;

        map<ListNode*, int> mp;
        while(it != NULL){
            if(mp[it] == 1) return true;
            mp[it] = 1;
            it = it->next;
        }
        return false;
    }
};