//Check if the entered string is a valid keyword

#include <iostream>
using namespace std;

bool isKeyword(string str) {
    string keywords[] = {"int", "float", "if", "else", "while", "return", "for", "do", "break"};
    for (string keyword : keywords)
        if (str == keyword) return true;
    return false;
}

int main() {
    string input;
    cout << "Enter a string: "; cin >> input;
    cout << (isKeyword(input) ? "Valid keyword" : "Not a keyword") << endl;
    return 0;
}
