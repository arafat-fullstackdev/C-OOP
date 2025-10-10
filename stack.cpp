#include <bits/stdc++.h>
#include <stack>
using namespace std;

// class arrayStack{
//     int *arr;

//     // array size
//     int capacity;
//     //array element index;
//     int top;

//     public:
//     //constructor implement
//     arrayStack(int cap){
//   capacity = cap;
//   top = -1;
//   arr = new  int[capacity];
//     };



// //push operation

// void push(int n){
//                  if(top == capacity -1){
//                   cout<<"Stack Overflow!"<<endl;
//                   return ;
//                  }

//                  arr[++top] =n;
// };

// int pop(){
//   if(top == -1){
//     cout<<"Stack Underflow!"<<endl;

//     return -1;
//   }
//   return arr[top--];
// };
// //? Peek value
// int peek(){
//   if(top == -1){
//     cout<<"Stack is Empty"<<endl;
//     return -1;
//     }
//     return arr[top];
// };

// // Stack isEmpty?
// bool isEmpty(){
//   return top == -1;
// }

// bool isFull(){
//   return top == capacity -1;
// }

// };

//?Linked list Implement
//Node structure
class Node{
      public:
      int data;
      Node *next;

      Node(int n){
        data = n;
        next = NULL;
      }
};

class myStack{
  //pointer define
  Node *top;

  //to store current size of stack
  int count;

  public:
  myStack(){
    //initially stack is empty
    top = NULL;
    count = 0;
  }
  //push
  void push(int n){
    Node *temp = new Node(n);
    temp-> next = top;
    top = temp;

    count ++;
  };

  //pop
  int pop(){
    if(top == NULL){
      cout<<"Stack UnderFlow!"<<endl;
      return -1;
    }

    Node *temp = top;
    top = top-> next;
    int val = temp-> data;

    count --;
    delete temp;
    return val;
  };

  // IS Full
  bool isFull(){
    return count == 5;
  };
};



int main() {
//arrayStack st(5);
myStack st;

st.push(1);   
st.push(11);   
st.push(111);   
st.push(11111);   
st.push(100000); 

// cout<<"Popped value "<<st.pop()<<endl;
// cout<<"Peek value: "<<st.peek()<<endl;
// cout<<"isEmpty value: "<<(st.isEmpty()? "Yes": "No")<<endl;
 cout<<"isFull value: "<<(st.isFull()? "Yes" : "No")<<endl;

    return 0;
}