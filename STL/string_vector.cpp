#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int n;
    // cin >> n;
    // vector<string> v;
    // for (int i = 0; i < n; i++)
    // {
    //     string s;
    //     cin >> s;
    //     v.push_back(s);
    // }
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << endl;
    // }

    //? vector Access
     vector<int> vc={1,2,3,4,5,6};
     vector<char> cht={'a','b','c','d'};

    //  cout<<"Vector Access: "<<vc[1]<<endl;
    //  cout<<"Vector Access: "<<vc[0]<<endl;
    //  cout<<"Vector Access: "<<vc[3]<<endl;
     //Traversing a vector  with loop
     for(int i =0; i<cht.size(); i++){
        //cout<<"Vector traverse "<<cht[i]<<endl;
     }

     //2D 

     vector<vector <int>> matrix = {
        {1,2,3},
        {4,5,6},
        {7,8,9},
     };
     cout<<matrix[1][2]<<endl;

    return 0;
};

