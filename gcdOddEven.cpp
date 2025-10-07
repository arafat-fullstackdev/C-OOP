#include <bits/stdc++.h>
using namespace std;


//GCD or HCF
int gcdFun(int a, int b){
    //cin>>a>>b;

    int result = min(a,b);
    

    while(result> 1){
        if(a% result ==0 && b% result == 0){
            break;
            result--;
        }
        
    }
    return result;
};

int main() {
     int a,b;
     cin>>a>>b;
    cout<<"GCD: "<<gcdFun(a,b)<<endl;




    return 0;
}