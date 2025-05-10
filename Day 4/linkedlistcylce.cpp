/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// class Solution {
// public:
//     bool hasCycle(ListNode *head) {
//         ListNode* temp = head;
//         vector<ListNode*> x;
//         while(temp!=nullptr){
//             if(find(x.begin(),x.end(), temp)!=x.end()){
//                 return true;
//             }
//             x.push_back(temp);
//             temp = temp->next;        
//         }
//         return false;
//     }
// };
class Solution {
    public:
        bool hasCycle(ListNode *head) {
            ListNode* slow = head;
            ListNode* fast = head;
            while (fast != NULL && fast -> next != NULL) {
                slow = slow -> next;
                fast = fast -> next -> next;
                if (slow == fast) return true;
            }
            return false;
        }
    };