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
ListNode* partition(ListNode* head, int x) {
    ListNode* dummy = new ListNode(-1);
    dummy->next = head;
    ListNode* prev = dummy;
    ListNode* curr = head;
    ListNode* l = dummy;
    while (l->next && l->next->val < x) {
        l = l->next;
        prev = prev->next;
        curr = curr->next;
    }
    while (curr) {
        if (curr->val < x) {
            prev->next = curr->next;
            curr->next = l->next;
            l->next = curr;
            l = curr;
            curr = prev->next;
        } else {
            prev = curr;
            curr = curr->next;
        }
    }
    return dummy->next;
}

};