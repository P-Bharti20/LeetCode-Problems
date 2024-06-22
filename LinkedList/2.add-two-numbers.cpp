/*
 * @lc app=leetcode id=2 lang=cpp
 *
 * [2] Add Two Numbers
 */

//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* res= new ListNode();
        ListNode* temp = new ListNode();
        res=temp;
        int carry=0;
        while(l1!=nullptr||l2!=nullptr||carry){
            if(l1!=nullptr){
                carry+=l1->val;
                l1=l1->next;
            }
            if(l2!=nullptr){
                carry+=l2->val;
                l2=l2->next;
            }
            ListNode* node=new ListNode(carry%10);
            temp->next=node;
            temp=temp->next;
            carry=carry/10;
        }
        return res->next;
    }
};

