// Iterative solution
class solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* forw=NULL;

        while(curr!=NULL) {
            forw=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forw;
        } 
        return prev;
    }
};


// Recursive solution
class solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* newhead = reverseList(head->next);
        head->next->next=head;
        head->next=NULL;

        return newhead;
    }
};