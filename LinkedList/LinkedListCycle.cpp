/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
#include <vector>
#include <algorithm>
class Solution {
public:
    bool hasCycle(ListNode *head) {
        std::vector<ListNode*> empty;
        while(head!=nullptr){
            if (count(empty.begin(), empty.end(), head)) {
                return true;
            }
            empty.push_back(head);
            head=head->next;
        }
        return false;
        
    }
};
