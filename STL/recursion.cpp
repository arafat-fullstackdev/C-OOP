#include<bits/stdc++.h>;
using namespace std;

void printFun(int n){

    //base case
    if(n == 0) return;
    printFun(n - 1);
    cout<<"Hello Recursion!"<<endl;

}

int main(){
    printFun(5);


return 0;

};