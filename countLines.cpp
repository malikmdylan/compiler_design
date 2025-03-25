#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string filename;
    cout << "Enter filename (or type 'self' to read this program): ";
    cin >> filename;

    if (filename == "self")  
        filename = __FILE__;  // Read its own source code

    ifstream file(filename);
    if (!file) {
        cout << "Error: File not found!" << endl;
        return 1;
    }

    int lineCount = 0;
    string line;
    while (getline(file, line))  // Read each line
        lineCount++;

    cout << "Number of lines in " << filename << ": " << lineCount << endl;
    return 0;
}
