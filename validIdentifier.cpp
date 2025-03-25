//Check if the entered string is a valid identifier

#include <iostream>
using namespace std;

bool isIdentifier(string str) {
    if (str.empty() || !(isalpha(str[0]) || str[0] == '_')) return false;
    for (char c : str)
        if (!(isalnum(c) || c == '_')) return false;
    return true;
}

int main() {
    string input;
    cout << "Enter a string: "; cin >> input;
    cout << (isIdentifier(input) ? "Valid identifier" : "Not a valid identifier") << endl;
    return 0;
}

