#include <bits/stdc++.h>;
using namespace std;

void printTable(int n){
    for(int i =1; i<=10; i++){
        cout<<n<<" * "<<i<<"="<<n*i<<endl;
    };
}
void printTable1(int m){
    for(int i =1; i<=10; i++){
        cout<<m<<" * "<<i<<"="<<m*i<<endl;
    };
}

int main(){
  int n =6;
 printTable(6);
 int m =7;
 printTable1(7);
return 0;

};