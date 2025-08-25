#include <iostream>
using namespace std;
int main() {
    int n = 4;
    int diag[100] = {1, 5, 9, 7}; 
    cout << "Diagonal matrix elements: ";
    for (int i = 0; i < n; i++) cout << diag[i] << " ";
    return 0;
}

