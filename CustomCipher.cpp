#include <iostream>
#include <string>

using namespace std;

string encode(string s, int j) {
    for (int i = j; i < s.length(); i += j+1) {
        s[i] += 2;
    }
    return s;
}

int main() {
    string inputString;
    int j;

    cout << "Enter a string to encode: ";
    getline(cin, inputString);

    cout << "Enter the number of characters to skip: ";
    cin >> j;

    string encodedString = encode(inputString, j);

    cout << "Encoded string: " << encodedString << endl;

    return 0;
}
