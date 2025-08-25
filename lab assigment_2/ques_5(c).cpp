#include <iostream>
using namespace std;
int main() {
    int n = 4;
    int lower[100]; 
    int idx = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            lower[idx++] = (i+1)*(j+1); 
        }
    }
    cout << "Stored lower triangular elements: ";
    for (int i=0;i<idx;i++) cout<<lower[i]<<" ";
    return 0;
}

