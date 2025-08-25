#include <iostream>
using namespace std;
int main() {
    int n = 4;
    int sym[100]; 
    int idx = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            sym[idx++] = (i+1)+(j+1); 
        }
    }
    cout << "Stored symmetric matrix elements: ";
    for (int i=0;i<idx;i++) cout<<sym[i]<<" ";
    return 0;
}

