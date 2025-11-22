#include <bits/stdc++.h>
using namespace std;

// Function for finding first and last occurrence of x
vector<int> find(vector<int> arr, int x) {
    int n = arr.size();

    // Initialize first and last index
    int first = -1, last = -1;

    for (int i = 0; i < n; i++) {

        // If x is different, continue
        if (x != arr[i])
            continue;
        
        // If first occurrence found
        if (first == -1)
            first = i;
        
        // Update last occurrence
        last = i;
    }
    vector<int> res = {first, last};
    return res;
}

int main() {
    vector<int> arr = {1, 3, 5, 5, 5, 5, 67, 123, 125};
    int x = 5;
    vector<int> res = find(arr, x);
    cout << res[0] << " " << res[1];
    return 0;
}