#include <iostream>
using namespace std;
int missingLinear(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        if (arr[i+1] - arr[i] != 1)
            return arr[i] + 1;
    }
    return -1;
}
int main() {
    int arr[] = {1,2,3,5,6}; 
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Missing number " << missingLinear(arr, n) << endl;
    return 0;
}

