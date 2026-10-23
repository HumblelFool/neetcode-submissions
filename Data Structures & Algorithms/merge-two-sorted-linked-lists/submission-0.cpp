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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int>store;
        ListNode * temp=list1;
        while(temp!=NULL){
            store.push_back(temp->val);
            temp=temp->next;
        }
        temp=list2;
        while(temp!=NULL){
            store.push_back(temp->val);
            temp=temp->next;
        }
        ListNode* dummy = new ListNode(0);
        ListNode* Ans = dummy;
        sort(store.begin(),store.end());
        for(int i=0;i<store.size();i++){
            Ans->next = new ListNode(store[i]);
            Ans=Ans->next;
        }
        return dummy->next;
    }
};
