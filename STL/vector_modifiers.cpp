#include <bits/stdc++.h>
using namespace std;

int main (){


    vector<int> x={10,20,30,40};
   // v=y // O(N)
   vector<int> y = {1,2,3};

//    for(int i =0; i<x.size(); i++){
//     cout<<x[i]<<endl;
//    };


   //  value insert
   //x.insert(x.begin()+2, 22);
   //Vector insert
   x.insert(x.end(),y.begin(), y.end());

   for(int a: x){  // Ranged based loop 
    //cout<<" Value for X"<<endl;
    cout<<a<<" ";
   }
   cout<<endl;

   // Vector erase();

   vector<int> n={1,2,3,4,5};
   n.erase(n.begin()+1,n.end()-1);
   for(int m:n){
    cout<<m<<" ";
   }
   return 0;

};