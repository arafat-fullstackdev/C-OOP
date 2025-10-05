
#include <bits/stdc++.h>
using namespace std;

void myFun(int p1, string p2){
    cout<<p1<<" "<<p2<<endl;

};

int mathFun(int n){
    return  3 + n;
};
int main() {
    myFun(10, "Java");
    myFun(20, "JavaScript");
    myFun(30, "C++");
   cout<<mathFun(22)<<endl;
    
    return 0;
}