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
        int calcgcd(int a, int b){
            if(a>=b){
                while(b != 0){
                    int temp = b;
                    b = a % b;
                    a = temp;
                }
                return a;
            }
            return calcgcd(b,a);
        }
        ListNode* insertGreatestCommonDivisors(ListNode* head) {
            if(head==nullptr || head->next==nullptr) return head;
            ListNode* temp1 = head;
            ListNode* temp2 = head->next;
            while(temp2!=nullptr){
                ListNode* gcdnode= new ListNode(calcgcd(temp1->val,temp2->val));
                gcdnode->next = temp1->next;
                temp1->next = gcdnode;
                temp1 = temp2;
                temp2 = temp2->next;
            }
            return head;
        }
    };