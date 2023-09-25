#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "This results for array..." << endl;
    string colors[10] = {"black", "blue", "red", "green", "yellow", "pink", "purple", "gray", "red", "white"};

    // Printing colors in a single line
    for (int i = 0; i < 10; i++) {
        cout << colors[i] << " ";
    }
    cout << endl;  // Add an extra newline after the array output

    cout << "This is for loops..." << endl;

    // Printing colors using a for-each loop
    for (string n : colors) {
        cout << n << " ";  // Print each color followed by a space
    }
    cout << endl;  // Add an extra newline after the for-each loop output

    cout << "This results for-each loop..." << endl;

    // Printing colors using a for-each loop on a single line
    for (string n : colors) {
        cout << n << " ";
    }

    return 0;
}


