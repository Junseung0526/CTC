#include <iostream>
using namespace std;

int main() {
    int a = 1;
    int b = 5;
    int c = 3;

    c = a;
    a += c;
    b -= c;

    cout << a << "\n";
    cout << b << "\n";
    cout << c << "\n";
    return 0;
}