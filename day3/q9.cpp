//206. reverse LL

#include<iostream>
#include<vector>
using namespace std;

class ListNode{
    public:
    int data;
    ListNode* next;
};

ListNode* reverseList(ListNode* head) {
    ListNode* prev = nullptr;
    ListNode* curr = head;
    while (curr != nullptr) {
        ListNode* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

int main(){
    return 0;
}
