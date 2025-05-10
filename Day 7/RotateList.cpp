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
        int calclength(ListNode* temp){
            int length = 0;
            while(temp!=nullptr){
                temp = temp->next;
                length++;
            }
            return length;
        }
    
        ListNode* rotateRight(ListNode* head, int k) {
            int l = calclength(head);
            if(l==0) return nullptr;
            k = k%l;
            if (k == 0) return head;
            ListNode* temp = head;
            for (int i = 0; i < l - k - 1; i++) {
                temp = temp->next;
            }
            ListNode* newhead = temp->next;
            temp->next = nullptr;
            //Check
            ListNode* tail = newhead;
            while (tail->next) {
                tail = tail->next;
            }
            tail->next = head;
    
            return newhead;
        }
    };