class Solution {
    public:
        ListNode* swapNodes(ListNode* head, int k) {
            ListNode* temp = head;
            int listlength = 0;
            while (temp != nullptr) {
                listlength++;
                temp = temp->next;
            }
            if (listlength - 2 * k + 1 == 0) return head; 
            ListNode* firstnode = head;
            int count = k;
            while (count > 1) {
                firstnode = firstnode->next;
                count--;
            }
            ListNode* secondnode = head;
            count = listlength - k;
            while (count > 0) {
                secondnode = secondnode->next;
                count--;
            }
            int tempVal = firstnode->val;
            firstnode->val = secondnode->val;
            secondnode->val = tempVal;
    
            return head;
        }
    };
    