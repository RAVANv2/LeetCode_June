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
    void deleteNode(ListNode* node)
    {
    	ListNode *delete_node  = node->next;
        node->val = delete_node->val;
        node->next = delete_node->next;
        delete delete_node;
    }
};
