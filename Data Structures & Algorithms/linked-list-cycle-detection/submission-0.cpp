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
        map<ListNode* ,bool>vis;
        ListNode *x = head;
        while(x != NULL) {
            if (vis[x]) return true;
            vis[x] = true;
            x = x->next;
        }
        return false;
    }
};