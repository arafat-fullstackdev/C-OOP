#include <bits/stdc++.h>;
using namespace std;

class Teacher{
 
    public:
    //properties // data members
    string name;
    string dept;
    string sub;
    double salary;
    
    //methods/member functions

    void changeDept(string newDept){
        dept = newDept;
    }
};

int main(){
Teacher t1;
t1.name = "Dimitri";
t1.dept = "C++";
t1.sub = "OOP";
t1.salary = 10000;

cout<<t1.name<<endl;

Teacher t2;
Teacher t3;

return 0;

}