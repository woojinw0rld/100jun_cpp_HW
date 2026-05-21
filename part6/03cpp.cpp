#include <iostream>
#include <vector>

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode dummy;
        ListNode* outNode = &dummy;
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        int uper = 0;
        
        while(temp1 != nullptr || temp2 != nullptr){
            int num1 = temp1 != nullptr ? temp1 -> val : 0;
            int num2 = temp2 != nullptr ? temp2 -> val : 0;
            int total = num1 + num2 + uper;
            int sum = total % 10;
            uper = total / 10;

            outNode -> next = new ListNode(sum);
            outNode = outNode -> next;

            temp1 = temp1 != nullptr ? temp1 -> next : nullptr;
            temp2 = temp2 != nullptr ? temp2 -> next : nullptr;

        }
        if (uper > 0){
            outNode -> next = new ListNode(uper);
            outNode = outNode -> next;
        }

        return dummy.next;
    }
};

ListNode* makeListNode(vector<int> head){
    ListNode dummy;
    ListNode* returnNode = &dummy;
    for(int n : head){
        returnNode -> next = new ListNode(n);
        returnNode = returnNode -> next;
    }
    return dummy.next;
}
void printNode(ListNode* head){
    ListNode* temp = head;
    while(temp != nullptr){
        cout << temp -> val << " ";
        temp = temp -> next;
    }
    cout << endl;
}



int main() {
    vector<int> num1 = {2,4,3};
    vector<int> num2 = {5,6,4};
    ListNode* l1 = makeListNode(num1);
    ListNode* l2 = makeListNode(num2);
    printNode(l1);
    printNode(l2);
    Solution sol;
    ListNode* resultNode = sol.addTwoNumbers(l1, l2);
    printNode(resultNode);
    
    return 0;
}