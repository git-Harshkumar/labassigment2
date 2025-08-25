#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char s[100] = "HELLO";
    for (int i = 0; s[i]; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] + 32;
    }
    cout << "Lowercase: " << s;
    return 0;
}

