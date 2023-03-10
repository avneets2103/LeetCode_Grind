//2. Adding 2 numbers

#include<iostream>
#include<vector>
using namespace std;

class ListNode{
    public:
    int val;
    ListNode* next;
    ListNode(int x){
        val=x;
        next=NULL;
    }
};

void delLast(ListNode*& base) {
    while (base->next->next != NULL) {
        base = base->next;
    }
    base->next = NULL;
}
ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
{
    ListNode *ptr1 = l1;
    ListNode *ptr2 = l2;
    ListNode *newList = new ListNode(0);
    ListNode *finalPtr = newList;
    int carry = 0;
    while (ptr1 != NULL && ptr2 != NULL)
    {
        finalPtr->val = (ptr1->val + ptr2->val + carry) % 10;
        carry = (ptr1->val + ptr2->val + carry)/ 10;
        ListNode *nextNode = new ListNode(0);
        finalPtr->next = nextNode;
        finalPtr = finalPtr->next;
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    if (ptr1 == NULL)
    {
        if (ptr2 == NULL)
        {
            if (!carry)
            {
                ListNode *temp = newList;
                while (temp->next != finalPtr)
                {
                    temp = temp->next;
                }
                temp->next = NULL;
            }
            else
            {
                finalPtr->val = 1;
            }
        }
        else
        {
            while (ptr2 != NULL)
            {
                finalPtr->val = (ptr2->val + carry) % 10;
                carry = (ptr2->val + carry) / 10;
                ListNode *nextNode = new ListNode(0);
                finalPtr->next = nextNode;
                finalPtr = finalPtr->next;
                ptr2 = ptr2->next;
            }
            if (carry)
            {
                finalPtr->val = 1;
            }
            else
            {
                ListNode *temp = newList;
                while (temp->next != finalPtr)
                {
                    temp = temp->next;
                }
                temp->next = NULL;
            }
        }
    }
    if (ptr2 == NULL)
    {
            while (ptr1 != NULL)
            {
                finalPtr->val = (ptr1->val + carry) % 10;
                carry = (ptr1->val + carry) / 10;
                ListNode *nextNode = new ListNode(0);
                finalPtr->next = nextNode;
                finalPtr = finalPtr->next;
                ptr1 = ptr1->next;
            }
            if (carry)
            {
                finalPtr->val = 1;
            }
            else{
                delLast(newList);
            }
    }
    return newList;
}
