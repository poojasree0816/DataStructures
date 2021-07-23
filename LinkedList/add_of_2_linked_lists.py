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
#include <iostream>
#include <list>
#include <iterator>
class Solution {
public:
    ListNode* res = new ListNode();
    ListNode* toreturn = res;
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int sum;
        int carry=0;
        ListNode* temp;
        int test=0;
        while(l1!=nullptr & l2!=nullptr){
            sum=0;
            sum=sum+l1->val+l2->val+carry;
            l1=l1->next;
            l2=l2->next;
            if(sum>9){
                sum=sum%10;
                carry=1;
            }
            else{
                carry=0;
            }
            ListNode *temp=new ListNode();
            temp->val=sum;
            res->next=temp;
            res=temp;
            if (test==0){
                toreturn=res;
                test=1;
            }
        }
        while(l1!=nullptr){
            sum=0;
            sum=sum+l1->val+carry;
            l1=l1->next;
            if(sum>9){
                sum=sum%10;
                carry=1;
            }
            else{
                carry=0;
            }
            ListNode *temp=new ListNode();
            temp->val=sum;
            res->next=temp;
            res=temp;
            if (test==0){
                toreturn=res;
                test=1;
            }
        }
        while(l2!=nullptr){
            sum=0;
            sum=sum+l2->val+carry;
            l2=l2->next;
            if(sum>9){
                sum=sum%10;
                carry=1;
            }
            else{
                carry=0;
            }
            ListNode *temp=new ListNode();
            temp->val=sum;
            res->next=temp;
            res=temp;
            if (test==0){
                toreturn=res;
                test=1;
            }
        }
        if(carry==1){
            ListNode* temp=new ListNode();
            temp->val=1;
            res->next=temp;
            res=temp;
        }        
        return toreturn;
    }
};
