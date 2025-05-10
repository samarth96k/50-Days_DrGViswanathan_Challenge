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
        ListNode* removeNthFromEnd(ListNode* head, int n) {
            ListNode* temp = head;
            int count= 0;
            while(temp!=nullptr){
                temp = temp->next;
                count++;
            }
            temp = head;
    
           if(count == n) {
               ListNode* toDelete = head;
               head = head->next;
               delete toDelete; 
               return head;
           }
            // if(temp == head){
            //     head = head->next;
            //     delete temp;
            //     return head;
            // }
            while(count-n>1) {temp = temp->next;count--; }
    
            if(temp == head && temp->next==nullptr){delete temp; return nullptr;}
    
    
            if(temp->next->next==nullptr) {delete temp->next; temp->next=nullptr;}
            else{
                            ListNode* toDelete = temp->next;     // Added this line
                temp->next = temp->next->next;
                delete toDelete;  
            }
            return head;
        }
        
    };