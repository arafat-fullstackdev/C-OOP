#include <bits/stdc++.h>
#include <stack>
using namespace std;

int celebrity(vector<vector<int>> & mat) {
    int n = mat.size();

    // indegree and outdegree array
    vector<int> indegree(n, 0), outdegree(n, 0);

    // query for all edges
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int x = mat[i][j];

            // set the degrees
            outdegree[i] += x;
            indegree[j] += x;
        }
    }

    // find a person with indegree n-1
    // and out degree 0
    for (int i = 0; i < n; i++)
        if (indegree[i] == n && outdegree[i] == 1)
            return i;

    return -1;
}

int main() {
    vector<vector<int> > mat = {{ 1, 1, 0 },
                                { 0, 1, 0 },
                                { 0, 1, 1 }};
    cout << celebrity(mat);
    return 0;
}