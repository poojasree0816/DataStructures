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
        ListNode* res=new ListNode();
        ListNode* toreturn=new ListNode();
        toreturn=res;
        while(head!=nullptr){
            if(head->val!=val){
                ListNode* temp=new ListNode();
                temp->val=head->val;
                res->next=temp;
                res=res->next;
                temp->next=NULL;
            }
            head=head->next;
        }
        return toreturn->next;
        
    }
};
