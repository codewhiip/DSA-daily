class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *ans = head;
        while(ans!=NULL && ans->next!=NULL){
           if(ans->val == ans->next->val) ans->next = ans->next->next;
           else ans = ans->next;
        }
        return head;
    }
};