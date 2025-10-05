#include <bits/stdc++.h>
using namespace std;

class Node{

    public:

    int data;
    Node* next; //next group address


    //? Make Constructor for receive data
// Constructor name same as class
Node(int data){


  this->data = data;
  this->next = NULL;  //Pointer
};


};

int main(){
  Node a(10);
  Node b(100);
 a.next = &b;
  //keep value
//   a.data = 10;
//   b.data = 20;

  //keep address
//   a.next = &b;
//   b.next = NULL;


  
  cout<<a.data<<endl;
  cout<<a.next->data<<endl;
  //cout<<b.data<<endl;
  return 0;
};