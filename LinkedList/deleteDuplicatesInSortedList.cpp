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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* res=new ListNode();
        ListNode* temp=new ListNode();
        ListNode* toreturn=new ListNode();
        temp=head;
        toreturn=res;
        while(head!=nullptr){
            if(head==temp){
                ListNode* temp1=new ListNode;
                temp1->val=head->val;
                temp1->next=NULL;
                res->next=temp1;
                res=temp1; 
            }
            else{
                if(res->val<head->val){
                    ListNode* temp1=new ListNode;
                    temp1->val=head->val;
                    temp1->next=NULL;
                    res->next=temp1;
                    res=temp1;
                }
            }
            
            head=head->next;
        }
        return toreturn->next;
    }
};
