#include <bits/stdc++.h>
using namespace std;

// struct SinglyListNode{
//     int val;
//     SinglyListNode * next;
//     SinglyListNode(int x) : val(x), next(NULL){};
// };

class Node{
    public:
    int data;
    Node* next;


    Node(int x){
        this->data = x;
        this->next = nullptr;
    }
};

int getLength(Node* head){
    int length = 0;

    //Count node in linked list

while (head)
{
   length++;
   head = head->next;
}

return length;
}

int getMiddleIndex(Node* head){
    int length = getLength(head);

    //traverse
    int midIndex = length/2;

    while (midIndex--)
    {
      head= head->next;
    }

    return head->data;
    
}

int main() {

    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);

    cout<<getMiddleIndex(head);
    
    return 0;
}