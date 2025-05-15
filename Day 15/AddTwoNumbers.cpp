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
    ListNode* reverseLL(ListNode* head){
        ListNode* prev = nullptr;
        ListNode* temp = head;
        while(temp!=nullptr){
            ListNode* front = temp->next;
            temp->next = prev;
            prev = temp;
            temp = front;
        }
        return prev;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // l1=reverseLL(l1);l2=reverseLL(l2);
        ListNode * temp1 = l1;
        ListNode * temp2 = l2;
        
        ListNode* dummy = new ListNode(-1);
        int carry = 0;
        ListNode * current = dummy;
        while(temp1!=nullptr || temp2!=nullptr){
            int sum = carry;
            if(temp1) {sum+= temp1->val; temp1 = temp1->next;}
            if(temp2) {sum+= temp2->val; temp2 = temp2->next;}
            ListNode* newnode = new ListNode(sum%10);
            carry=sum/10;
            current->next = newnode;
            current = newnode;
        }
        if(carry){
            ListNode* newnode = new ListNode(carry);
            current->next = newnode;
            current = newnode;
        }
        // ListNode* result = reverseLL(dummy->next);
        // delete dummy;
        return dummy->next;
    }
};