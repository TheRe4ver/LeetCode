#include <iostream>

using namespace std;

struct ListNode 
{
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };

class Solution 
{
public:
    void deleteNode(ListNode* node) 
    {
        ListNode* temp = node->next; 
        node->val = node->next->val;
        node->next = node->next->next; 
        delete temp;
    }
};

void main()
{
    Solution program;
    ListNode* list = new ListNode(0);
    program.deleteNode(list);

}