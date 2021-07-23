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
#include<string>
class Solution {
public:
    int binaryToDecimal(string n)
    {
        string num = n;
        int dec_value = 0;
        int base = 1;
        int len = num.length();
        for (int i = len - 1; i >= 0; i--) {
            if (num[i] == '1')
                dec_value += base;
            base = base * 2;
        }
 
        return dec_value;
    }
    int getDecimalValue(ListNode* head) {
        string s="";
        while(head!=nullptr){
            int temp=head->val;
            head=head->next;
            s=s+to_string(temp);
        }
        int binarynum=binaryToDecimal(s);
        return binarynum;
    }
};
