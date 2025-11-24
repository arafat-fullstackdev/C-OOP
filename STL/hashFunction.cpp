#include<bits/stdc++.h>;
using namespace std;

int main(){

    string code = "geeksForGeeks";
    string code1 = "geeksForGeek";

    bitset<8> b1("102035");
    hash<bitset<8>> h1;



    //hash<string>  hs;
    

    // cout<<code<<endl;
    // cout<<hs(code)<<endl;
    // cout<<hs(code1)<<endl;

    cout<<b1<<endl;
    cout<<h1(b1)<<endl;


return 0;

};