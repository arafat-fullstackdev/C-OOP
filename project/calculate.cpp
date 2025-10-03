#include <bits/stdc++.h>
using namespace std;

char gradeFunction(double avg){
    if(avg>= 90) return 'APlus';
    else if(avg>= 80)  return 'A';
    else if(avg>= 70)  return 'B';
    else if(avg>= 60)  return 'C';
    else if(avg>= 50)  return 'D';
    else return 'F';

};


int main() {
    int count;
    double sum =0, grade;

    cout<<"How many grade (1 to 5)? ";
    cin>>count;

    //Validate that count is between 1 and 5
    if(count <1 || count>5){
        cout<<"Invalid number. You must enter between 1 and 5 grade"<<endl;
        return 1;
    }
    
    for(int i =1; i<=count; i++){
    cout<<"Enter grade"<<i<<" :";
    cin>>grade;
    sum += grade;
    }

    //Calculate numeric average
    double avg = sum/count;

    cout<<"Average:"<<avg<<endl;
    cout<<"Grade: "<<gradeFunction(avg)<<endl;
    return 0;
}