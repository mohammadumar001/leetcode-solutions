/*
 * @lc app=leetcode id=203 lang=cpp
 *
 * [203] Remove Linked List Elements
 */

// @lc code=start

#include <list>
#include <set>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *removeElements(ListNode *head, int val)
    {
        ListNode *temp;
        ListNode *prev=nullptr;
        ListNode *next=nullptr;
        temp = head;

        while (temp != nullptr)
        {
            
            if(temp->val==val)
            continue;
            else

        }
    }
    };
    // @lc code=end
