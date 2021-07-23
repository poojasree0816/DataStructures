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
    ListNode* revList=new ListNode();
    ListNode* toreturn=revList;
    ListNode* reverseList(ListNode* head) {
        int counts;
        counts=count(head);
        for(int i=0; i<counts;i++){
            ListNode* temp=new ListNode();
            ListNode* temp1=new ListNode();
            temp=head;
            while(temp->next!=NULL){
                temp1=temp;
                temp=temp->next;
            }
            ListNode* p=new ListNode(temp->val);
            //p->val=temp->val;
            //free(temp);
            temp1->next=NULL;
            revList->next=p;
            revList=revList->next;
        }
        return toreturn->next;
    }
    int count(ListNode* head1){
        int counts=0;
        while(head1!=nullptr){
            counts=counts+1;
            head1=head1->next;
        }
        return counts;
    }
};
