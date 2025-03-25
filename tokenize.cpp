//Tokenize a given string

#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string input, token;
    cout << "Enter a sentence: ";
    cin.ignore();  // Ignore leftover newline
    getline(cin, input);  // Read the full line

    stringstream ss(input);
    while (ss >> token)  // Extract tokens one by one
        cout << "Token: " << token << endl;

    return 0;
}
