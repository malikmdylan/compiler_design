//Check if the entered string is a valid integer constant

#include <iostream>
using namespace std;

bool isInteger(string str) {
    if (str.empty()) return false;
    if (str[0] == '-') str = str.substr(1);  // Allow negative numbers
    for (char c : str)
        if (!isdigit(c)) return false;
    return true;
}

int main() {
    string input;
    cout << "Enter a string: "; cin >> input;
    cout << (isInteger(input) ? "Valid integer constant" : "Not a valid integer") << endl;
    return 0;
}
