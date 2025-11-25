//#include <bits/stdc++.h>;
#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        long long  n;

        cin >> n;

        if (n % 2 == 0)
            cout << n / 2 << endl;
        else
            cout << (n * 3) + 1 << endl;
    }

    return 0;
};