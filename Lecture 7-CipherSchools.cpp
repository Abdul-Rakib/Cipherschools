#include <iostream>

using namespace std;

int main() {
    int password;
    
    do {
        cout << "Enter a password (greater than 999999): ";
        cin >> password;

        if (password <= 999999)
            cout << "Password is too short. Please try again.\n";

    } while (password <= 999999);

    cout << "Password accepted!\n";

    return 0;
}
