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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL){
            return head;
        }
        ListNode *pre = NULL;
        while(head && head->val == val){
            pre = head;
            head = head->next;
            delete pre;
        }
        ListNode *temp = head;
        while(temp && temp->next){
            if(temp->next->val == val){
                ListNode *n = temp->next;
                temp->next = n->next;
                delete n;
            }
            else{
                temp = temp->next;
            }
        }
        return head;
    }
};