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
    ListNode* middleNode(ListNode* head) {
        int counts=count(head);
        for(int i=0; i<(counts/2);i++){
            head=head->next;
        }
        return head;
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
