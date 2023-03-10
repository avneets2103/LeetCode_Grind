#include<iostream>
#include<vector>
using namespace std;

class ListNode{
    public:
    int val;
    ListNode* next;
    ListNode(int x){
        val = x;
        next=NULL;
    }
};

class Solution {
public:

    int llsize(ListNode* head){
        ListNode* head2 = head;
        int cnt = 0;
        while(head2!=NULL){
            head2=head2->next;
        }
        return cnt;
    }

    ListNode* head;
    Solution(ListNode* head) {
        this->head = head;
    }
    
    int getRandom() {
        int no = rand();
        int index = no % llsize(head);
        ListNode* temp = head;
        for (int i = 0; i <= index; i++)
        {
            temp=temp->next;
        }
        return temp->val;
    }
};
int main(){
    return 0;
}
