/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* intersect = new ListNode;
        ListNode* temp = new ListNode;
        temp=headB; 
        while(headA!=nullptr){
            headB=temp;
            while(headB!=nullptr){
                if(headA == headB){
                    intersect=headA;
                    return intersect;
                }
                headB=headB->next;
            }
            headA=headA->next;
        }
        return NULL;
    }
};
