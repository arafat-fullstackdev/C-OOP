#include<bits/stdc++.h>;
using namespace std;


bool isSubset(vector<int> & a, vector<int> & b) {
  
    // Iterate over each element in the second array
  int m=a.size(),n=b.size();
    for (int i = 0; i < n; i++) {
        bool found = false;
      
        // Check if the element exists in the first array
        for (int j = 0; j < m; j++) {
            if (b[i] == a[j]) {
                found = true;
                a[j] = -1 ;
                break;
            }
        }
      
        // If any element is not found, return false
        if (!found) return false;
    }
  
    // If all elements are found, return true
    return true;
}


int main(){
    string sc = "greeksForGeeks";
    string sc1 = "geeksMethodology";

    hash<string> hs;
    hash<string> hs1;
    cout<<hs(sc)<<endl;
    cout<<hs1(sc1)<<endl;

return 0;

};