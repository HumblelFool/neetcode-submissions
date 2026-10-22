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
    ListNode* reverseList(ListNode* head) {
        vector<int>store;
        ListNode* temp = head;
        while(temp!=NULL){
            store.push_back(temp->val);
            temp=temp->next;
        }

        int i=store.size()-1;
        temp = head;
        while(temp!=NULL){
           temp->val=store[i];
           temp=temp->next;
           i--;
        }
        return head;
    }
};
