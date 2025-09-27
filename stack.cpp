#include <bits/stdc++.h>
#include <stack>
using namespace std;

class arrayStack{
    int *arr;

    // array size
    int capacity;
    //array element index;
    int top;

    public:
    //constructor implement
    arrayStack(int cap){
  capacity = cap;
  top = -1;
  arr = new  int[capacity];
    };



//push operation

void push(int n){
                 if(top == capacity -1){
                  cout<<"Stack Overflow!"<<endl;
                  return ;
                 }

                 arr[++top] =n;
};

int pop(){
  if(top == -1){
    cout<<"Stack Underflow!"<<endl;

    return -1;
  }
};
};
int main() {
arrayStack st(5);

st.push(1);   
st.push(11);   
st.push(111);   
st.push(11111);   
st.push(100000); 

cout<<"Poped value"<<st.pop()<<endl;

    return 0;
}