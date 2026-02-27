#include <iostream>
#include <vector> 
using namespace std;


/*
 * Definition for singly-linked list.*/
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(!list2)return list1;
        if(!list1)return list2;
        if(list1->val<list2->val){
            list1->next=mergeTwoLists(list1->next,list2);
            return list1;
        }
        else{
            list2->next=mergeTwoLists(list1,list2->next);
            return list2;
        }
    }
}; 
// main function to test the solution
int main() {
    Solution sol;
    ListNode* list1 = new ListNode(1);
    list1->next = new ListNode(2);
    list1->next->next = new ListNode(4);

    ListNode* list2 = new ListNode(1);
    list2->next = new ListNode(3);
    list2->next->next = new ListNode(4);

    ListNode* mergedList = sol.mergeTwoLists(list1, list2);

    // Print the merged list
    ListNode* current = mergedList;
    while (current) {
        cout << current->val << " ";
        current = current->next;
    }
    cout << endl;

    // Clean up memory (delete the merged list)
    current = mergedList;
    while (current) {
        ListNode* temp = current;
        current = current->next;
        delete temp;
    }

    return 0;
}