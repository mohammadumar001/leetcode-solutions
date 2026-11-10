/*
 * @lc app=leetcode id=206 lang=cpp
 *
 * [206] Reverse Linked List
 */

// @lc code=start


#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;

  struct ListNode {
     int val;
   ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode * copy=nullptr;
        ListNode * temp=head;
        ListNode * simp=nullptr;
        ListNode * newnode;
        temp=head;
        while(temp!=nullptr){
            newnode=new ListNode();
            newnode->val=temp->val;
            newnode->next=nullptr;
            if(copy==nullptr){
            copy=newnode;
            }
            else
            simp->next=newnode;

            simp=newnode;
            temp=temp->next;
            
        }
        return copy;
    }
};
// @lc code=end

