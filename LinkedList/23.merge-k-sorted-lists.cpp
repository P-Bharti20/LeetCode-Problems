/*
 * @lc app=leetcode id=23 lang=cpp
 *
 * [23] Merge k Sorted Lists
 */

#include<bits/stdc++.h>
using namespace std;
// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

struct comparator {
    bool operator() (const ListNode* n1, const ListNode* n2){
        return n1->val<n2->val;
    }
};

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* temp= new ListNode();
        ListNode* dummy=temp;
        set<ListNode*,comparator> s;
        for(auto it:lists){
            while(it!=nullptr){
                s.insert(it);
                it=it->next;
            }
        }
        for(auto it:s){
            dummy->next=it;
            dummy=dummy->next;
        }
        return dummy->next;
    }
};
// @lc code=end

