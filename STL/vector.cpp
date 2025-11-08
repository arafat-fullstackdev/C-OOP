#include <bits/stdc++.h>
using namespace std;

int main(){

    // vector<int> vc; //type 1
    // vector<int> vc(22); //type 2
    // vector<int> vc(5,22); //type 3

    // for(int  i =0; i<vc.size(); i++){
    //     cout<<vc[i]<<" ";
    // }
    // cout<<vc.size()<<endl;
    // cout<<vc.size()<<endl;
    // cout<<vc.size()<<endl;

    vector<int> v1;
    vector<int> v2(3,6);

    for(int n: v2){
        cout<<"vector Value and size "<<n<<endl;
    }

    vector<int> v3={3,3,3};
    for(int m: v3){
        cout<<"Vector three value "<<m<<endl;
    }
    return 0;
}