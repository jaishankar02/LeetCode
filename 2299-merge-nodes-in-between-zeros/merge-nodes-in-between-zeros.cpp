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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp,*prev;
        temp=head->next;
        prev=head->next;
        int count=0;
        while(temp!=NULL){
            if(temp->val!=0){
                count+=temp->val;
            }
            else{
                prev->val=count;
                prev->next=temp->next;
                prev=temp->next;
                count=0;
            }
            temp=temp->next;
        }
        head=head->next;
        return head;
    }
};