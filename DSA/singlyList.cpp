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
//Copy code

struct node {
   int data;
   struct node *next;
};
struct node *head = NULL;
struct node *current = NULL;

// display the list
void printList(){
   struct node *p = head;
   printf("\n[");
   
   //start from the beginning
   while(p != NULL) {
      printf(" %d ",p->data);
      p = p->next;
   }
   printf("]");
}

//insertion at the beginning
void insertatbegin(int data){
   
   //create a link
   struct node *lk = (struct node*) malloc(sizeof(struct node));
   lk->data = data;
   
   // point it to old first node
   lk->next = head;
   
   //point first to new first node
   head = lk;
}
void copyCode(){
   int k=0;
   insertatbegin(12);
   insertatbegin(22);
   insertatbegin(30);
   insertatbegin(44);
   insertatbegin(50);
   printf("Linked List: ");
   
   // print list
   printList();
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