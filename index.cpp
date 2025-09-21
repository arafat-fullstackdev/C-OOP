#include <bits/stdc++.h>

using namespace std;
#include <queue>

int main() {
queue<int>q;    
q.push(1);
q.push(11);
q.push(111);
q.push(1111);

cout<<q.size()<<endl;
cout<<q.front()<<endl;
cout<<q.back()<<endl;

    return 0;
}