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
        bool isPalindrome(ListNode* head) {
            vector<int> nodes;
            ListNode * temp = head;
            while(temp!=nullptr){
                nodes.push_back(temp->val);
                temp = temp->next;
            }
    
            temp = head; 
             for(int i = 0;i<nodes.size();i++){
                if(nodes[i]!=temp->val){return false;}
                temp = temp->next;
             }
            return true;
        }
    };
            // int i = 0; int j = nodes.size()-1;
            // while(i<j){
            //     if(nodes[i]!=nodes[j]){
            //         return false;
            //     }
            //     i++ ; j--;
            // }