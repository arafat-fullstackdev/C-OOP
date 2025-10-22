#include <bits/stdc++.h>
using namespace std;

class Test{
    public:
    // USer Defined Constructor
    Test(){
        cout<<"Constructor Called!"<<endl;
    }

    // User Defined Destructor
    ~Test(){
        cout<<"Destructor Called!"<<endl;
    }
};

int main(){
  Test t;

  return 0;
}