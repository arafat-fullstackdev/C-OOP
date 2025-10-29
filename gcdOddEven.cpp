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

// even
int lcmFun(int a, int b){
    //large value
    int g = max(a,b);

    //Smaller value
    int s = min(a,b);

    for(int i =g; i<= a *b;  i+=g){
        if(i % s ==0) 
        return i;
    }

  
};

int main() {
     int a,b;
     cin>>a>>b;
    //cout<<"GCD: "<<gcdFun(a,b)<<endl;
    cout<<"LCM "<<lcmFun(a,b)<<endl;




    return 0;
}