#include <iostream>
using namespace std;
int main() {
    int n = 4;
    int upper[100];
    int idx = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            upper[idx++] = (i+1)*(j+1); 
        }
    }
    cout << "Stored upper triangular elements: ";
    for (int i=0;i<idx;i++) cout<<upper[i]<<" ";
    return 0;
}

