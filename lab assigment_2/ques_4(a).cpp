#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char s1[100] = "Hello ";
    char s2[100] = "World";
    strcat(s1, s2);
    cout << s1;
    return 0;
}

