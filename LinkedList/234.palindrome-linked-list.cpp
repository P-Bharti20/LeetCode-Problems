/*
 * @lc app=leetcode id=234 lang=cpp
 *
 * [234] Palindrome Linked List
 */

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    struct comparator {
        bool operator() (const ListNode* n1, const ListNode* n2){
            return n1->val<n2->val;
        }
    };
    ListNode* reverseList(ListNode* head) {
        ListNode* node =nullptr;
        while(head!=nullptr){
            ListNode* temp=head->next;
            head->next=node;
            node=head;
            head=temp;
        }
        return node;
    }

    bool isPalindrome(ListNode* head) {
        ListNode* curr=head;
        ListNode* fast=head , *slow=head;
        while(fast->next!=nullptr && fast->next->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }

        ListNode* rev=reverseList(slow->next);
        slow->next=nullptr;
        while(rev!=nullptr){
            if(rev->val!=head->val) return false;
            rev=rev->next;
            head=head->next;
        }
        return true;
    }
};
// @lc code=end

