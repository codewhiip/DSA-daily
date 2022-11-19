class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* finalhead=NULL, *finaltail=NULL;
        if(list1 == NULL) return list2;    
        if(list2 == NULL) return list1;
    
    while(list1!=NULL && list2!=NULL){
        if(finalhead== NULL && finaltail==NULL){
            if(list1->val < list2->val){
                finalhead = list1;
                finaltail = list1;
                list1 = list1->next;
            }
            else {
                finalhead = list2;
                finaltail = list2;
                list2 = list2->next;
            }
        }
        else {    
            if(list1->val < list2->val){
                finaltail->next = list1;
                finaltail = finaltail->next;
                list1 = list1->next;
            } 
            else {
                finaltail->next = list2;
                finaltail = finaltail->next;
                list2 = list2->next;
            }   
        }
    }
    if(list1!=NULL) finaltail->next = list1;
    if(list2!=NULL) finaltail->next = list2;
    
    return finalhead;
    }
};