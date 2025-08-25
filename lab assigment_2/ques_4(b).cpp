#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char s[100] = "OpenAI";
    int n = strlen(s);
    for (int i = 0; i < n/2; i++)
        swap(s[i], s[n-i-1]);
    cout <<s;
    return 0;
}

