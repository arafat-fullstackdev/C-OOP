#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
        // cout<<v.capacity()<<endl;
       // v.clear();
        v.resize(2); //size increase or decrease
        v.resize(8,800); //size increase or decrease
         cout<<v.size()<<endl;
        for(int i =0; i<v.size(); i++){
            cout<<v[i]<<endl;
        }
// cout<<v[0]<<endl;
// cout<<v[3]<<endl;

    //cout<<v.max_size()<<endl;

    return 0;
}