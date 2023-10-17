#include <iostream>
using namespace std;

void add() { // without return, without parameter
    int a = 10;
    int b = 20;
    cout << a + b << endl;
}

int sum() { // with return, without parameter
    int a = 10, b = 20;
    return a + b;
}

void add(int x, int y) { // without return, with parameter
    cout << x + y << endl;
}

int sum(int x, int y) { // with return, with parameter
    return x + y;
}

int main() {
    int a = 10, b = 20;
    add(a, b);
    add();
    cout << sum() << endl; // Error: sum() called without arguments
    cout << sum(a, b) << endl;

    return 0; // Added return statement for main
}
